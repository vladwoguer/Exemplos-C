#include<stdio.h>
/* Exemplo operadores de atribuição Vladwoguer Bezerra Maio de 2016 */

int main(void) {
	int a;
	printf("Por favor insira o valor de A:");
	scanf("%d", &a);
	
	a += 10;
	printf("A + 10= %d\n", a);
	a -= 2;
	printf("(A + 10)-2= %d\n", a);
	a++;
	printf("((A + 10)-2)+1= %d\n", a);
	--a;
	printf("((A + 10)-2)= %d\n", a);
	
	return 0;
}
