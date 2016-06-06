#include <stdio.h>

/* Exemplo funcoes passagem de parâmetros por valor vs referência Vladwoguer Bezerra Maio 2016 */
int passagem_por_referencia(int *a);
int passagem_por_valor(int a);

int main(void) {
    int variavel = 1;
    int outra_variavel = 1;

    passagem_por_referencia(&variavel);
    passagem_por_valor(outra_variavel);

    printf("%d %d", variavel, outra_variavel);
	return 0;
}

int passagem_por_referencia(int *a) {
    (*a)++;
    return a;
}

int passagem_por_valor(int a) {
    a++;
    return a;
}
