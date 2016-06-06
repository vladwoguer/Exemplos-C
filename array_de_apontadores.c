#include <stdio.h>
/* Exemplo array de apontadores Vladwoguer Bezerra Maio 2016 */
void imprime_linha(int *linha[], int tamanho) {
    int cont;
    for(cont = 0; cont < tamanho; cont++) {
        printf("%d ", (*linha)[cont]);
    }
    printf("\n");
}
int main(void) {
    int *array[10];
    int tamanho_4[] = {1, 2 ,3, 4};
    int tamanho_5[] = {1, 2 ,3, 4, 5};
    /* A vantagem de um array de apontadores é que se pode ter por
     * exemplo uma coleção de arrays de varios tamanhos, o que
     * não é possível com arrays multidimensionais onde todos os arrays
     * devem ter o mesmo tamanho. Exemplo: int array[M][N]*/
    array[0] = tamanho_4;
    array[1] = tamanho_5;

    imprime_linha(&array[0], 4);
    imprime_linha(&array[1], 5);

    return 0;
}
