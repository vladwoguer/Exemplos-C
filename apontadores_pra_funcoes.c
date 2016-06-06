#include <stdio.h>

/* Exemplo demonstrando apontadores pra funcoes Vladwoguer Bezerra Maio 2016 */
int quadrado(int x) {
    return x*x;
}

int funcao_mais_um (int (*funcao)(), int x) {
    return (*funcao)(x) + 1;
}
int main(void) {
    int resultado, lido;
    printf("Insira um número: \n");
    scanf("%d", &lido);
    resultado = funcao_mais_um (quadrado, lido);
    printf("(X^2) + 1 = %d", resultado);
	return 0;
}
