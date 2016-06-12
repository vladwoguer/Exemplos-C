#include <stdio.h>

/* Exemplo especificações de conversao Vladwoguer Bezerra Junho 2016 */
int main(int argc, char *argv[]) {
    int k = 97;
    float z = (float) k;
    char frase[] = "Frase_qualquer";
    /* Note que dado o especificador de conversao podemos ter o dado em varios formatos */
    printf("Decimal: %d\n Decimal sem sinal: %u\n Octal: %o\n  Hexadecimal: %x\n Caractere: %c\n Notação cientifica: %e\n Ponto flutuante: %f\n Cadeia de caracteres: %s\n", k, k, k, k, k, z, z, frase);

    /* OBS: O hifen significa alinhar a esquerda, e o numero antes do ponto o numero de casas e depois do ponto
     * o máximo de carcteres a mostrar da string
     */
    printf("Alinhado a esquerda: *%10s*\n", frase);
    printf("Alinhado a esquerda: *%-10s*\n", frase);
    printf("Alinhado a esquerda: *%20s*\n", frase);
    printf("Alinhado a esquerda: *%-20s*\n", frase);
    printf("Alinhado a esquerda: *%20.10s*\n", frase);
    printf("Alinhado a esquerda: *%-20.10s*\n", frase);
    printf("Alinhado a esquerda: *%.10s*\n", frase);

    z = 123.456789;

    /* No caso do float o numero depois do ponto indica a quantidade de casas decimais */
    printf("Ponto flutuante com duas casas demais: *%.2f*\n", z);

    return 0;
}

