#include<stdio.h>
/* Exemplo com numeros Vladwoguer Bezerra Maio de 2016 */

char * verdadeiro_ou_falso(unsigned int x);

int main(void) {
	int a,b;
	printf("Por favor insira o valor de A:");
	scanf("%d", &a);
	printf("Por favor insira o valor de B:");
	scanf("%d", &b);
	
	printf("A > B= %s\n", verdadeiro_ou_falso(a > b));
	printf("A >= B= %s\n", verdadeiro_ou_falso(a >= b));
	printf("A < B= %s\n", verdadeiro_ou_falso(a < b));
	printf("A <= B= %s\n", verdadeiro_ou_falso(a <= b));
	printf("A igual B= %s\n", verdadeiro_ou_falso(a == b));	
	printf("A diferente B= %s\n", verdadeiro_ou_falso(a != b));	
	return 0;
}

char * verdadeiro_ou_falso(unsigned int x) {
	return x == 0 ? "Falso" : "Verdadeiro";
}
