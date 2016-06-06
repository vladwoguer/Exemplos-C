#include <stdio.h>

/* Exemplo array multidimensional Vladwoguer Bezerra Maio 2016 */
int main(void) {
    int array_mult[10][10]; /* Reserva 100 posicoes de memória */

    int i, j;
    int cont;

    cont = 1;

    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            array_mult[i][j] = cont++;
        }
    }

    printf("array_mult:\n");
    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            printf("%d ", array_mult[i][j]);
        }
        printf("\n");
    }
    printf("\n");

	return 0;
}
