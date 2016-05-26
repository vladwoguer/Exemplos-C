#include<stdio.h>

/* Exemplo switch Vladwoguer Bezerra Maio de 2016 */
int main(void) {
	int numero;
	
	printf("Digite um número de 5 a 9: \n");
	scanf("%d", &numero);
	
	switch(numero) {
		
		case 5: {
			printf("CINCO\n");
			break;
		}
		
		case 6: {
			printf("SEIS\n");
			break;
		}
		
		case 7: {
			printf("SETE\n");
			break;
		}
		
		case 8: {
			printf("OITO\n");
			break;
		}
		
		case 9: {
			printf("NOVE\n");
			break;
		}
		
		default: {
			printf("Você digitou um número fora do intervalo de 4 a 9\n");
			break;
		}
	
	}
	
	return 0;
}
