#include<stdio.h>
/* Exemplo operadores bit a bit Vladwoguer Bezerra Maio de 2016 */

int main(void) {
	int a,b,c;
	printf("Por favor insira o valor de A:");
	scanf("%d", &a);
	printf("Por favor insira o valor de B:");
	scanf("%d", &b);
	
	printf("A E B= %d\n", a & b);
	printf("A OU B= %d\n", a | b);
	printf("A OU EXCLUSIVO B= %d\n", a ^ b);
	printf("N�O A= %d\n", ~a);
	printf("A deslocado dois bits � esquerda= %d\n", a<<2);
	printf("A deslocado dois bits � direita= %d\n", a>>2);
	
	return 0;
}
