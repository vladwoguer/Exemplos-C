#include<stdio.h>
/* Exemplo operadores lógicos Vladwoguer Bezerra Maio de 2016 */

char * verdadeiro_ou_falso(unsigned int x);

int main(void) {
	int a,b;
	printf("Por favor insira o valor de A:");
	scanf("%d", &a);
	printf("Por favor insira o valor de B:");
	scanf("%d", &b);
	
	printf("A E B= %s\n", verdadeiro_ou_falso(a && b));
	printf("A OU B= %s\n", verdadeiro_ou_falso(a || b));
	printf("NÃO A= %s\n", verdadeiro_ou_falso(!a));
	
	return 0;
}

char * verdadeiro_ou_falso(unsigned int x) {
	return x == 0 ? "Falso" : "Verdadeiro";
}
