#include <stdio.h>

/* Exemplo demonstrando caracteres Vladwoguer Bezerra Maio 2016 */
int main(void) {
	char a = 'A'; /* Variaveis char na verdade armazenam o código referente ao caractere*/
	unsigned int caractere = a;
	
	char CARACTERE_NULO = '\0'; /* Serve pra finalizar strings é o que o compilador usa para marcar o fim da string */
	char TABULACAO = '\t';
	char ASPA_DUPLA = '\"';
	char CONTRABARRA = '\\';
	char NOVA_LINHA = '\n';
	
	printf("Os caracteres: %c %c", a, caractere);
	printf("%c ", CARACTERE_NULO);
	printf("%c ", TABULACAO);
	printf("%c ", ASPA_DUPLA);
	printf("%c ", CONTRABARRA);
	printf("%c ", NOVA_LINHA);
	
	return 0;
}
