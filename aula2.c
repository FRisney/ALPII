#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num;
	int valor = 0;

	printf("Digite um número: ");
	scanf("%i", &num);

	printf("Digite um valor: ");
	scanf("%i", &valor);

	if(num == valor) {
		valor = num;
		printf("O numero é %d", num);
		printf("\n");
		valor = 2;
		printf("O valor é %d", valor);
		printf("\n");
	}else{
		printf("Numero é %d", num);
		printf("\n");
		printf("O valor é %d", valor);
		printf("\n");
	}
	return 0;
}
