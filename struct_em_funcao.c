#include<stdio.h>
#include<time.h>
/* Exemplo como passar struct para funções Vladwoguer Bezerra junho de 2016 */
struct data {
    int dia;
    int mes;
    int ano;
};

void imprime_data(struct data *data_qualquer);

int main(void) {
    struct data data_qualquer = {18,3,1991}; /* Inicializando o struct */

    imprime_data(&data_qualquer); /* Não é possível passar um struct diretamente então passamos sua referência */

    return 0;
}

void imprime_data(struct data *data_qualquer) {
    printf("%02d/%02d/%02d", data_qualquer->dia, data_qualquer->mes, data_qualquer->ano);
}

