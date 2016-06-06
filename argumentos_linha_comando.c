#include <stdio.h>

/* Exemplo demonstrando como passar argumentos via linha de comando Vladwoguer Bezerra Maio 2016 */
int main(int argc, char *argv[]) {
    /* argc número de argumentos */
    /* argv array de argumentos */
    printf("Voce passou %d argumentos foram os seguintes: \n", argc);
    while(argc--) {
        printf("%d: %s\n", argc, argv[argc]);
    }
    return 0;
}
