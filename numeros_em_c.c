#include<stdio.h>
/* Exemplo com numeros Vladwoguer Bezerra Maio de 2016 */
int main(void) {
	long a = 12L;
	long notacao_cientifica = 0.12E2L;
	int octal = 077; /* Octal 77 */
	int hexadecimal = 0xAA10; /* Hexadecimal AA10 */
	int convertido = (long) 89; /* Conversao explicita, cuidado dependendo do valor pode perder bits */
	
	printf("%s\n", (a == notacao_cientifica) ? "Verdadeiro" : "Falso");
	printf("77 na base 8 convertido para base 10= %d\n", octal); /* Imprime o octal como decimal*/
	printf("AA10 na base 16 convertido para base 10= %d\n", hexadecimal); /* Imprime o hexadecimal como decimal*/
	return 0;
}
