#include <stdio.h>

/* Exemplo entrada padr�o, sa�da padr�o, sa�da de erro Vladwoguer Bezerra Junho 2016 */
int main(int argc, char *argv[]) {
    int numero;
    fprintf(stdout, "Digite um n�mero: \n");
    fscanf(stdin, "%d", &numero); /* Lendo da sa�da padr�o */
    fprintf(stdout, "Saida padrao: Valor lido da entrada padr�o =  %d\n", numero);
    fprintf(stderr, "Saida de erro: Valor lido da entrada padr�o =  %d\n", numero);

    return 0;
}
