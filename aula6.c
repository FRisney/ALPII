#include <stdio.h>
#include <math.h>
#include <locale.h>

void calculadora();
void calorias();

int main() {
	int escolha, loop;
	printf("Executar em loop? (0-não) ( maior que 0-sim) > ");
	scanf("%i", &loop);

	printf("1 - Calculadora\n");
	printf("2 - Calorias\n");

	do{
	printf("Digite o número da atividade > ");
	scanf("%i", &escolha);
	switch (escolha) {
		case 1:
			calculadora();
			break;
		case 2:
			calorias();
			break;
		default:
			printf("Opcao invalida - encerrando.\n");
			loop = 0;
			break;
	}
	}while(loop);
	return 0;
}

// Construa um programa que permita ao usuário escolher 1 das operações matemáticas
//  soma, subtração, multiplicação ou divisão entre 2 números. Não é permitido gerar respostas
// com números negativos. Apresentar a operação escolhida, os números envolvidos e a resposta
// da operação
void calculadora(){
// Codigos ASCII para +, -, * e / respectivamente
#define ADICAO 43
#define SUBTRACAO 45
#define MULTIPLICACAO 42
#define DIVISAO 47
	float num1, num2, resultado;
	char operacao;

	printf("Digite a operacao: (ex. 2+2)");
	printf("\n");
	scanf("%f%c%f", &num1, &operacao, &num2);
	// printf("%.2f %c %.2f", num1, operacao, num2);

	switch (operacao) {
		case ADICAO:
			resultado = num1 + num2;
			break;
		case SUBTRACAO:
			resultado = num1 - num2;
			break;
		case MULTIPLICACAO:
			resultado = num1 * num2;
			break;
		case DIVISAO:
			resultado = num1 / num2;
			break;
		default:
			printf("Operação inválida");
			printf("\n");
			return;
	}
	if (resultado < 0.0){
		printf("O resultado e negativo");
	}else{
		printf("O resultado é %.2f", resultado);
	}
	printf("\n");
}

// 2) Faça um algoritmo que informe a quantidade total de calorias a partir da escolha do
// usuário que deve informar o prato típico e a bebida.
//           PRATO                  BEBIDA
//          MACARRÃO 750 cal        cha 30 cal
//          JAPONES 324 cal         Suco de laranja 80 cal
//          CHILENO 545 cal         Refri 90 cal
//     USAR SWITCH CASE

void calorias() {

#define MACARRAO_OPT 1
#define MACARRAO_CAL 750
#define MACARRAO_STR "Macarrão"
#define JAPONES_OPT 2
#define JAPONES_CAL 324
#define JAPONES_STR "Japonês"
#define CHILENO_OPT 3
#define CHILENO_CAL 545
#define CHILENO_STR "Chileno"
#define CHA_OPT 1
#define CHA_CAL 30
#define CHA_STR "Chá"
#define SUCO_OPT 2
#define SUCO_CAL 80
#define SUCO_STR "Suco"
#define REFRI_OPT 3
#define REFRI_CAL 90
#define REFRI_STR "Refri"

	int bebida, prato, calorias = 0;

	printf("\tPrato\t\t\t\tBebida\n");
	printf("\t1-%s: %d cal\t\t1-%s: %d cal\n", MACARRAO_STR, MACARRAO_CAL,CHA_STR, CHA_CAL);
	printf("\t2-%s: %d cal\t\t2-%s: %d cal\n", JAPONES_STR, JAPONES_CAL, SUCO_STR, SUCO_CAL);
	printf("\t3-%s: %d cal\t\t3-%s: %d cal\n", CHILENO_STR, CHILENO_CAL, REFRI_STR, REFRI_CAL);

	printf("Digite o prato e a bebida: (ex. 2 1)");
	printf("\n");
	scanf("%d %d", &prato, &bebida);

	if (prato == MACARRAO_OPT) {
		calorias += MACARRAO_CAL;
		printf("Você escolheu o prato %s\n", MACARRAO_STR);
	} else if (prato == JAPONES_OPT) {
		calorias += JAPONES_CAL;
		printf("Você escolheu o prato %s\n", JAPONES_STR);
	} else if (prato == CHILENO_OPT) {
		calorias += CHILENO_CAL;
		printf("Você escolheu o prato %s\n", CHILENO_STR);
	} else {
		printf("Prato inválido\n");
		return;
	}

	if (bebida == CHA_OPT) {
		calorias += CHA_CAL;
		printf("Você escolheu a bebida %s\n", CHA_STR);
	} else if (bebida == SUCO_OPT) {
		calorias += SUCO_CAL;
		printf("Você escolheu a bebida %s\n", SUCO_STR);
	} else if (bebida == REFRI_OPT) {
		calorias += REFRI_CAL;
		printf("Você escolheu a bebida %s\n", REFRI_STR);
	} else {
		printf("Bebida inválida\n");
		return;
	}

	/*
	switch (prato){
		case MACARRAO_OPT:
			calorias += MACARRAO_CAL;
			break;
		case JAPONES_OPT:
			calorias += JAPONES_CAL;
			break;
		case CHILENO_OPT:
			calorias += CHILENO_CAL;
			break;
		default:
			printf("Prato inválido\n");
			return;
	}

	switch (bebida){
		case CHA_OPT:
			calorias += CHA_CAL;
			break;
		case SUCO_OPT:
			calorias += SUCO_CAL;
			break;
		case REFRI_OPT:
			calorias += REFRI_CAL;
			break;
		default:
			printf("Bebida inválida\n");
			return;
	}
	*/

	printf("Você consumirá %d calorias\n", calorias);
}
