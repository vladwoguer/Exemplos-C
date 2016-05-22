#include<stdio.h>
/* Exemplo com operadores aritméticos Vladwoguer Bezerra Maio de 2016 */
int main(void) {
	int a,b;
	printf("Por favor insira o valor de A:");
	scanf("%d", &a);
	printf("Por favor insira o valor de B:");
	scanf("%d", &b);
	
	printf("A+B= %d\n", a + b);
	printf("A-B= %d\n", a - b);
	printf("A*B= %d\n", a * b);
	if(b != 0) {
		printf("A/B= %d\n", a / b);	
		printf("RESTO DE A/B= %d\n", a % b);	
	} else {
		printf("B é zero divisao por zero é uma operação indefinida\n");
	}
	printf("-A= %d\n", -a);
	
	return 0;
}
