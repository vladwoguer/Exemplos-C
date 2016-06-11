#include<stdio.h>
#include<time.h>
/* Exemplo struct Vladwoguer Bezerra junho de 2016 */
struct data {
    int dia;
    int mes;
    int ano;
};

int main(void) {
    struct data hoje;
    time_t rawtime;
    time ( &rawtime );
    struct tm *timeinfo;
    timeinfo = localtime ( &rawtime );
    hoje.dia = timeinfo->tm_mday;
    hoje.mes = (timeinfo->tm_mon) + 1;
    hoje.ano = (timeinfo->tm_year) + 1900;

    printf("Hoje é : %d/%d/%d", hoje.dia, hoje.mes, hoje.ano);

    return 0;
}
