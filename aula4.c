#include <stdio.h>
#include <math.h>
#include <locale.h>

void maior_menor();
void multiplo_e();
void multiplo_ou();

int main() {
	int escolha, loop;
	printf("Executar em loop? (0-não) ( maior que 0-sim) > ");
	scanf("%i", &loop);

	printf("1 - Escreva um programa que receba 5 números inteiros e apresente o maior e o menor\n");
	printf("2 - Escreva um programa que informe se o número é divisível por 3 e por 7.\n");
	printf("3 - Escreva um programa que informe se o número é divisível por 3 ou por 7.\n");

	do{
	printf("Digite o número da atividade > ");
	scanf("%i", &escolha);
	switch (escolha) {
		case 1:
			maior_menor();
			break;
		case 2:
			multiplo_e();
			break;
		case 3:
			multiplo_ou();
			break;
		default:
			printf("Opcao invalida - encerrando.\n");
			loop = 0;
			break;
	}
	}while(loop);
	return 0;
}

/* Escreva um programa que receba 5 números inteiros e apresente o maior e o menor */
void maior_menor(){
	int n[5], menor = 2147483647, maior = -2147483648;

	printf("Digite 5 numeros separados por espaços > ");
	scanf("%i %i %i %i %i", &n[1], &n[2], &n[3], &n[4], &n[5]);

	maior = n[1];
	menor = n[1];

	for (int i=1; i<6; i++) {
		if (n[i] >= maior) {
			maior = n[i];
		}
		if (n[i] <= menor){
			menor = n[i];
		}
	}


	printf("maior = %d e menor = %d\n", maior, menor);
}

/* Escreva um programa que informe se o número é divisível por 3 e por 7. */
void multiplo_e(){
	int num = 0;

	printf("Digite um número > ");
	scanf("%i", &num);

	if (num % 7 == 0 && num % 3 == 0){
		printf("É multiplo de 3 e de 7\n");
	}else {
		printf("Não é divisível por 3 e 7 ao mesmo tempo\n");
	}
}

/* Escreva um programa que informe se o número é divisível por 3 ou por 7. */
void multiplo_ou(){
	int num = 0;

	printf("Digite um número > ");
	scanf("%i", &num);

	if (num % 7 == 0 || num % 3 == 0){
		printf("É multiplo de 3 ou de 7\n");
	}else {
		printf("Não é multiplo de 3 e nem de 7\n");
	}
}

