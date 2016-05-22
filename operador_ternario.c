#include <time.h>
#include <stdlib.h>
/* Exemplo com operador ternario Vladwoguer Bezerra Fevereiro de 2016 */
int main(void) {
	srand(time(NULL));
	int r = rand();

	printf("%s", (r % 2) == 0 ? "Par" : "Ímpar");
	return 0;
}
