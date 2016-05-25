#include<stdio.h>

/* Exemplo while Vladwoguer Bezerra Maio de 2016 */
int main(void) {
	int i;
	
	i=0;
	while(i<100){
		printf("Loop %d !!!\n", i);
		i++;
	}
	
	/*
	*	Note a equivalencia com:
	*	for(i=0; i<100; i++){
	*		printf("Loop %d !!!\n", i);
	*	}
	*/
	
	return 0;
}
