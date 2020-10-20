#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num;
	int valor = 0;

	printf("Digite um número positivo: ");
	scanf("%i", &num);

	if(num >= 0) {
		float raiz = 0;
		raiz = sqrt(num);
		printf("Sua raiz quadrada é %f", raiz);
		printf("\n");
		int quad = 0;
		quad = pow(num, 2);
		printf("Seu quadrado é %d", quad);
	}else{
		printf("O número precisa ser positivo!");
	}
	printf("\n");
	return 0;
}
