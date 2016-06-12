#include<stdio.h>

/* Exemplo funções e macros para lidar com caracteres Vladwoguer Bezerra Junho 2016 */
int main(void) {
    char carac;

    printf("Insira um caractere: ");
    carac =  getchar();
    printf("\n");

    printf("Eh alfanumerico: %s\n", isalpha(carac) > 0 ? "Sim" : "Não");
    printf("Eh caixa alta: %s\n", isupper(carac) > 0 ? "Sim" : "Não");
    printf("Eh caixa baixa: %s\n", islower(carac) > 0 ? "Sim" : "Não");
    printf("Eh digito: %s\n", isdigit(carac) > 0 ? "Sim" : "Não");
    printf("Eh espaco: %s\n", isspace(carac) > 0 ? "Sim" : "Não");
    printf("Covertido pra maisculo: %c\n", toupper(carac));
    printf("Convertido pra minusculo: %c\n", tolower(carac));





    return 0;
}
