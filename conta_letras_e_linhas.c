#include <stdio.h>

// Exemplo conta letras Vladwoguer Bezerra Fevereiro 2016
int main(void) {
	int c, conta_letras;
	conta_letras = 0;

	
	while((c=getchar())!='\n'){
		conta_letras++;
	
	}
	
	printf("Voce digitou %d letras(incluindo espacos tabulacoes ) ",conta_letras );
	
	getchar();
	return 0;
}
