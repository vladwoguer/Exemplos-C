#include<stdio.h>
/* Exemplo com operadores aritm�ticos Vladwoguer Bezerra Maio de 2016 */
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
		printf("B � zero divisao por zero � uma opera��o indefinida\n");
	}
	printf("-A= %d\n", -a);
	
	return 0;
}
