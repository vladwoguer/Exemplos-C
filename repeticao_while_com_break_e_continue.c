#include<stdio.h>
#define V 1

/* Exemplo while, break e continue Vladwoguer Bezerra Maio de 2016 */
int main(void) {
	int entrada;
	int cont = 0;
	while(V) {
		cont++;
		printf("Digite 9 para sair e 8 pra pular, qualquer outra tecla prossegue o loop: \n");
		scanf("%d", &entrada);
		if(entrada == 9) {
			break;
		}
		if(entrada == 8) {
			printf("Pulando resto do loop\n");
			continue;
		}
		printf("Loop %d \n", cont);
	} 
	return 0;
}
