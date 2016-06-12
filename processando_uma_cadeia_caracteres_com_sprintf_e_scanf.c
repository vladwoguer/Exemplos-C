#include <stdio.h>

/* Exemplo entrada padrão, saída padrão, saída de erro Vladwoguer Bezerra Junho 2016 */
int main(int argc, char *argv[]) {
    char cadeia_de_caracteres[] = "12 89.98";

    int inteiro;
    float flutuante;

    char cadeia_saida[256];

    sscanf(cadeia_de_caracteres, "%d %f", &inteiro, &flutuante);
    sprintf(cadeia_saida,"%.2f %d", flutuante, inteiro);

    printf("%s\n", cadeia_saida);

    return 0;
}
