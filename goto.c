#include<stdio.h>

/* Exemplo goto Vladwoguer Bezerra Maio de 2016 */
int main(void) {
	goto meuRotulo;
	serio: printf("É sério!!!\n");
	
	return 0;
	
	meuRotulo: {
		printf("Nunca use goto\n");
		goto serio;
	}
}
