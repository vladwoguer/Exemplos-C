#include <stdio.h>
void le_linha(char linha[]); // Declaracao da funcao, lembre que no caso do array a passagem eh por referencia 
int main(void){
	char linha[256];
	le_linha(linha);
	printf("%s", linha);
	return 0;
}

void le_linha(char linha[]) {
	int i=0;
	int c;
	while((c=getchar()) != EOF && c!= '\n'){
		linha[i++]=c;
		if(i==255) {
			break;
		}
	}
	if(c=='\n'){
		linha[i++]='\n';
	}
	linha[i++]='\0';
}
