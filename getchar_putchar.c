#include <stdio.h>

/* Exemplo com getchar e putchar Vladwoguer Bezerra Fevereiro de 2016 */
int main(void) {
	int c;
	c = getchar();
	
	while(c!=EOF) { // Podia ter sido feito tambem (c = getchar()) != EOF, mas assim fica mais legivel
		putchar(c);
		c = getchar();
	}
	return 0;
}
