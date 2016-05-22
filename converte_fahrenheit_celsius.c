#include <stdio.h>

/* Conversor F para C Vladwoguer Bezerra Janeiro de 2016 */
int main(void) {
	float fahr, celsius;

	printf("Forneça o valor em Fahrenheit: ");
	scanf(" %f", &fahr);
	celsius =(5.0/9.0) * (fahr-32.0);
	printf("Para %4.0f o valor em Celsius é: %6.1f\n", fahr, celsius);
	return 0;
}
