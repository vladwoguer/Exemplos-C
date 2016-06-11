#include<stdio.h>
/* Exemplo como usar typedef Vladwoguer Bezerra junho de 2016 */

typedef int inteiro;
typedef int *apontador_pra_inteiro;

void imprime_inteiro(apontador_pra_inteiro numero) {
    printf("%d\n",(*numero));
}

int main(void) {
    inteiro meu_inteiro = 9999;
    apontador_pra_inteiro meu_apontador = &meu_inteiro;
    imprime_inteiro(meu_apontador);
    return 0;
}
