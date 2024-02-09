void troca (int *x, int *y) {
int *temp; // o ponteiro para int chamado temp, mas voc� n�o alocou espa�o de mem�ria para ele. Para resolver retire o * temp 
*temp = *x;
*x = *y;
*y = *temp;
}
// est� errado pelo o fato de o ponteiro armazenar os dados de endere�o do x e troca o endere�o do mesmo com o y

void troca (int *x, int *y) { // agora est� correto
int temp; 
temp = *x;
*x = *y;
*y = temp;
