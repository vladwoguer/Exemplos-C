#include<stdio.h>

/* Exemplo if Vladwoguer Bezerra Maio de 2016 */
int main(void) {
	int a, b;
	
	printf("Insira o valor de a: ");
	scanf("%d", &a);
	printf("\nInsira o valor de b: ");
	scanf("%d", &b);
	
	if(a == b) {
		printf("A = B");
	} else
		if(a>b) {
			printf("A > B");
		} else {
			printf("B > A");
		}
	return 0;
}
