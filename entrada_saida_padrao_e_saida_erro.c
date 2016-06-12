#include <stdio.h>

/* Exemplo entrada padrão, saída padrão, saída de erro Vladwoguer Bezerra Junho 2016 */
int main(int argc, char *argv[]) {
    int numero;
    fprintf(stdout, "Digite um número: \n");
    fscanf(stdin, "%d", &numero); /* Lendo da saída padrão */
    fprintf(stdout, "Saida padrao: Valor lido da entrada padrão =  %d\n", numero);
    fprintf(stderr, "Saida de erro: Valor lido da entrada padrão =  %d\n", numero);

    return 0;
}
