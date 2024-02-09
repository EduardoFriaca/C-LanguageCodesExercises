//Nome:Eduardo Honorio Friaca        Tia:42205794   
//Nome:Arthur Cezar da Silveira Lima Tia:42210178
//Nome:Lucas Distretti Claudio       Tia:42244633

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LARGURA_MAX 1024
#define ALTURA_MAX 768
#define TAMANHO_MAX_CODIGO 10000 // Um tamanho m�ximo grande o suficiente para o c�digo


// Fun��o para ler um arquivo PBM e preencher a matriz de pixels
void lerArquivoPBM(char *nomeArquivo, int *largura, int *altura, int pixels[ALTURA_MAX][LARGURA_MAX]) {
    FILE *arquivo = fopen(nomeArquivo, "r"); // Abro o arquivo PBM para leitura
    if (!arquivo) {
        perror("Erro ao abrir o arquivo"); // Se n�o conseguir abrir, exibo um erro
        exit(1);
    }

    char buffer[16];
    if (!fgets(buffer, sizeof(buffer), arquivo)) { // Leio o cabe�alho do arquivo PBM
        perror("Erro na leitura do arquivo");
        fclose(arquivo);
        exit(1);
    }

    // Ignoro linhas de coment�rio que come�am com '#'
    do {
        fgets(buffer, sizeof(buffer), arquivo);
    } while (buffer[0] == '#');

    sscanf(buffer, "%d %d", largura, altura); // Leio as dimens�es da imagem do arquivo
    if (*largura > LARGURA_MAX || *altura > ALTURA_MAX) {
        fprintf(stderr, "Dimens�es da imagem excedem o limite m�ximo\n"); // Verifico se as dimens�es s�o maiores que o limite
        fclose(arquivo);
        exit(1);
    }

    // Leio os dados dos pixels do arquivo e preencho a matriz de pixels
    int i,j;
    for (i = 0; i < *altura; i++) {
        for (j = 0; j < *largura; j++) {
            fscanf(arquivo, "%d", &pixels[i][j]);
        }
    }

    fclose(arquivo); // Fecho o arquivo ap�s a leitura
}

// Fun��o para ler a entrada manual dos dados da imagem
void lerEntradaManual(int *largura, int *altura, int pixels[ALTURA_MAX][LARGURA_MAX]) {
    printf("Informe as dimens�es da imagem (largura altura): ");
    scanf("%d %d", largura, altura); // Pe�o ao usu�rio para informar a largura e altura da imagem

    if (*largura > LARGURA_MAX || *altura > ALTURA_MAX) {
        fprintf(stderr, "Dimens�es da imagem excedem o limite m�ximo\n"); // Verifico se as dimens�es s�o maiores que o limite
        exit(1);
    }

    printf("Informe os valores dos pixels (0 para branco, 1 para preto):\n");
    // Pe�o ao usu�rio para informar os valores de cada pixel
    int i, j;
    for (i = 0; i < *altura; i++) {
        for (j = 0; j < *largura; j++) {
            scanf("%d", &pixels[i][j]);
        }
    }
}

// Verifica se uma �rea espec�fica da imagem � uniforme (todos os pixels t�m o mesmo valor)
void eUniforme(int x, int y, int largura, int altura, int pixels[ALTURA_MAX][LARGURA_MAX], int *uniforme, char *cor) {
    int primeiroPixel = pixels[y][x]; // Pego o valor do primeiro pixel da �rea
    *uniforme = 1; // Assumo inicialmente que a �rea � uniforme
    *cor = primeiroPixel == 1 ? 'P' : 'B'; // Defino a cor com base no valor do primeiro pixel
    int i, j;

    for (i = y; i < y + altura && *uniforme; i++) {
        for (j = x; j < x + largura; j++) {
            if (pixels[i][j] != primeiroPixel) {
                *uniforme = 0; // Se encontrar um pixel diferente, a �rea n�o � uniforme
                break;
            }
        }
    }
}

// Processa a imagem para gerar o c�digo correspondente
void processarImagem(int x, int y, int largura, int altura, int pixels[ALTURA_MAX][LARGURA_MAX], char *codigo) {
    int uniforme;
    char cor;
    eUniforme(x, y, largura, altura, pixels, &uniforme, &cor); // Verifico se a �rea atual � uniforme

    if (uniforme) {
        sprintf(codigo, "%c", cor); // Se for uniforme, o c�digo � simplesmente a cor
    } else {
        // Se n�o for uniforme, divido a imagem em quatro quadrantes e processo cada um
        int larguraMedia = largura / 2;
        int alturaMedia = altura / 2;
        char codigoQuadrantes[4][TAMANHO_MAX_CODIGO]; // Armazeno o c�digo de cada quadrante

        // Processo cada quadrante recursivamente
        processarImagem(x, y, larguraMedia, alturaMedia, pixels, codigoQuadrantes[0]);
        processarImagem(x + larguraMedia, y, largura - larguraMedia, alturaMedia, pixels, codigoQuadrantes[1]);
        processarImagem(x, y + alturaMedia, larguraMedia, altura - alturaMedia, pixels, codigoQuadrantes[2]);
        processarImagem(x + larguraMedia, y + alturaMedia, largura - larguraMedia, altura - alturaMedia, pixels, codigoQuadrantes[3]);

        // Concateno os c�digos dos quadrantes com 'X' no in�cio para formar o c�digo final
        sprintf(codigo, "X%s%s%s%s", codigoQuadrantes[0], codigoQuadrantes[1], codigoQuadrantes[2], codigoQuadrantes[3]);
    }
}


void exibirAjuda() {
    // Exibe informa��es de ajuda sobre como usar o programa
    printf("Uso: ImageEncoder [-? | -m | -f ARQ]\n");
    printf("Codifica imagens bin�rias dadas em arquivos PBM ou por dados informados manualmente.\n");
    printf("Argumentos:\n");
    printf("-?, --help : apresenta essa orienta��o na tela.\n");
    printf("-m, --manual: ativa o modo de entrada manual.\n");
    printf("-f, --file: considera a imagem representada no arquivo PBM.\n");
}

int main(int argc, char *argv[]) {
    int largura = 0, altura = 0;
    int pixels[ALTURA_MAX][LARGURA_MAX];
    char codigo[TAMANHO_MAX_CODIGO];
    char nomeArquivo[256];

    // Processa argumentos da linha de comando para o modo CLI
    if (argc > 1) {
        // Modo CLI: processa os argumentos da linha de comando
        if (strcmp(argv[1], "-f") == 0 && argc > 2) {
            lerArquivoPBM(argv[2], &largura, &altura, pixels);
        } else if (strcmp(argv[1], "-m") == 0) {
            lerEntradaManual(&largura, &altura, pixels);
        } else {
            exibirAjuda();
            return 0;
        }

        // Processamento da imagem e exibi��o do c�digo resultante
        processarImagem(0, 0, largura, altura, pixels, codigo);
        printf("C�digo da imagem: %s\n", codigo);
        return 0;
    }

    // Modo interativo com menu para usu�rios que preferem uma interface gr�fica
    char opcao;
    while (1) {
        // Apresenta o menu de op��es ao usu�rio
        printf("\nMenu de Op��es:\n");
        printf("1. Ler de arquivo PBM (-f)\n");
        printf("2. Entrada manual (-m)\n");
        printf("3. Ajuda (-?)\n");
        printf("4. Sair\n");
        printf("Escolha uma op��o: ");
        scanf(" %c", &opcao);

        // Processa a escolha do usu�rio
        switch (opcao) {
            case '1':
                // Leitura de arquivo PBM
                printf("Digite o nome do arquivo PBM: ");
                scanf("%s", nomeArquivo);
                lerArquivoPBM(nomeArquivo, &largura, &altura, pixels);
                break;
            case '2':
                // Entrada manual de dados da imagem
                lerEntradaManual(&largura, &altura, pixels);
                break;
            case '3':
                // Exibe informa��es de ajuda
                exibirAjuda();
                continue;
            case '4':
                // Sai do programa
                printf("Saindo do programa...\n");
                return 0;
            default:
                printf("Op��o inv�lida. Por favor, tente novamente.\n");
                continue;
        }

        // Processamento da imagem e exibi��o do c�digo resultante
        processarImagem(0, 0, largura, altura, pixels, codigo);
        printf("C�digo da imagem: %s\n", codigo);
    }

    return 0;
}
