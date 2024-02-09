//Nome: Eduardo Honorio Friaca     Tia: 42205794
//Nome: Gabriel Mason Guerino      Tia: 42240328
//Nome: Pedro Akira Cardoso Toma   Tia: 42207002

#include <stdio.h>

// estrutura que armazena as informacoes de matricula e digito verificador
struct RegistroMatricula {
    int matricula;
    int digito;
};

//funcao para calcular o digito verificador
int calcularDigitoVerificador(int matricula) {
    int soma = 0;
    int peso = 2;

    while (matricula > 0) {
        int digito = matricula % 10;
        soma += digito * peso;
        peso++;

        matricula /= 10;
    }

    int resto = soma % 11;
    int digitoVerificador = 11 - resto;

    if (digitoVerificador == 10 || digitoVerificador == 11) {
        digitoVerificador = 0;
    }

    return digitoVerificador;
}

int main() {
    struct RegistroMatricula matriculas[10];
    int i;

    printf("Digite 10 numeros de matricula e seus digitos verificadores:\n");

    //aqui li as matriculas e digitos verificadores
    for (i = 0; i < 10; i++) {
        scanf("%d %d", &matriculas[i].matricula, &matriculas[i].digito);
    }

    printf("Matricula    Mensagem\n");

    //verifiquei e fiz a impressao das mensagens
    for ( i = 0; i < 10; i++) {
        int matricula = matriculas[i].matricula;
        int digitoVerificadorCalculado = calcularDigitoVerificador(matricula);

        if (digitoVerificadorCalculado == matriculas[i].digito) {
            printf("%d-%d    Digito verificador correto\n", matricula, digitoVerificadorCalculado);
        } else {
            printf("%d-%d    Digito verificador incorreto\n", matricula, digitoVerificadorCalculado);
        }
    }

    return 0;
}

