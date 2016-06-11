#include<stdio.h>
/* Exemplo de Union Vladwoguer Bezerra junho de 2016 */

union numero_ou_texto {
    float numero;
    char texto[256];
};

int main(void) {
    union numero_ou_texto uniao;
    printf("A Union tem o tamanho do maior membro: %d bytes\n", sizeof(uniao));

    /* A Union só amrmazena um elemento de cada vez */
    uniao.numero = 10;
    printf("Uniao= %d\n", uniao.numero);
    /* Ao atribuir o outro elemento o primeiro se perde */
    strcpy(uniao.texto, "Meu texto");
    printf("Uniao= %s\n", uniao.texto);
    return 0;
}

