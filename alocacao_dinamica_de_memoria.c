#include <stdio.h>

/* Exemplo Aloca��o din�mica de mem�ria Vladwoguer Bezerra Junho 2016 */
int main(int argc, char *argv[]) {
    int *teste;

    teste = (int*) calloc(2, sizeof(int));
    printf("Insira um n�mero: ");
    scanf("%d", &teste[0]);
     printf("Insira outro n�mero: ");
    scanf("%d", &teste[1]);
    printf("\n");
    printf("Voce digitou: %d e %d", teste[0], teste[1]);

    free(teste);

    return 0;
}
