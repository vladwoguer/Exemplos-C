#include<stdio.h>

/* Exemplo dowhile Vladwoguer Bezerra Maio de 2016 */
int main(void) {
	int i;
	
	i=0;
	do {
		printf("Loop %d !!!\n", i);
		i++;
	}
	while(i<100);
	
	/*
	* Note que executa primeiro e testa depois
	*/
	
	return 0;
}
