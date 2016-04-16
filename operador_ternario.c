#include <time.h>
#include <stdlib.h>

int main(void) {
	srand(time(NULL));
	int r = rand();

	printf("%s", (r % 2) == 0 ? "Par" : "Ímpar");
	return 0;
}
