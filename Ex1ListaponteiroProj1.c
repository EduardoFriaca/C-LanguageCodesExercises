void troca (int *x, int *y) {
int *temp; // o ponteiro para int chamado temp, mas você não alocou espaço de memória para ele. Para resolver retire o * temp 
*temp = *x;
*x = *y;
*y = *temp;
}
// está errado pelo o fato de o ponteiro armazenar os dados de endereço do x e troca o endereço do mesmo com o y

void troca (int *x, int *y) { // agora está correto
int temp; 
temp = *x;
*x = *y;
*y = temp;
