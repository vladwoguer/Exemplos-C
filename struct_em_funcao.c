#include<stdio.h>
#include<time.h>
/* Exemplo como passar struct para fun��es Vladwoguer Bezerra junho de 2016 */
struct data {
    int dia;
    int mes;
    int ano;
};

void imprime_data(struct data *data_qualquer);

int main(void) {
    struct data data_qualquer = {18,3,1991}; /* Inicializando o struct */

    imprime_data(&data_qualquer); /* N�o � poss�vel passar um struct diretamente ent�o passamos sua refer�ncia */

    return 0;
}

void imprime_data(struct data *data_qualquer) {
    printf("%02d/%02d/%02d", data_qualquer->dia, data_qualquer->mes, data_qualquer->ano);
}

