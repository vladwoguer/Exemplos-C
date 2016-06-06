#include <stdio.h>

/* Exemplo aritmética de apontadores Vladwoguer Bezerra Maio 2016 */
int main(void) {
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	int *apon, *apon2;
	int cont;

	apon = a;
	apon2 = &a[0];

	for(cont = 0; cont < (sizeof(a)/sizeof(int)); cont++) {
        printf("%d %d \n", *(apon++), *(apon2++));
	}

	return 0;
}
