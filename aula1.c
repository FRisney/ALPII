#include <stdio.h>

#define TRUE 1
#define FALSE 0

/*
1) exercício para postar no studeo: utilizar printf, scanf, declaração de variáveis
a)declarar variáveis de diversos tipos em C
b)printf para solicitar leitura da variavel
c)scanf para capturar a variavel
d) utilizar o qualificador de leitura "%?"
*/

int valida_zero(int num) {
	if(num == 0) {
		return TRUE;
	}else{
		return FALSE;
	}
}

int main() {
	int num = 0;
	char letra;
	printf("Insira uma letra:\t");
	scanf("%c", &letra);
	printf("Insira 0 ou 1:\t");
	scanf("%i", &num);
	if(valida_zero(num)) {
		printf("Hello, World!");
	}else{
		printf("Goodby, World!");
	}
	printf("\n");
	printf("A letra foi:\t%c\n", letra);
	return 0;
}

