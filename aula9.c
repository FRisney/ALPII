#include <stdio.h>
#include <math.h>
#include <locale.h>

void calculadora();
void calorias();
void multiplo();
void menu();

int main() {
	int escolha, loop;
	printf("Executar em loop? (0-não) ( maior que 0-sim) > ");
	scanf("%i", &loop);

	do{
	printf("Digite o número da atividade > ");
	scanf("%i", &escolha);
	switch (escolha) {
		case 0: menu(); break;
		case 1: calculadora(); break;
		case 2: calorias(); break;
		case 3: multiplo(); break;
		default:
			printf("Opcao invalida - encerrando.\n");
			loop = 0;
			break;
	}
	}while(loop);
	return 0;
}

void menu() {
	printf("1 - Calculadora\n");
	printf("2 - Aumento de Salario\n");
	printf("3 - Mutiplo de 3 e 7\n");
}

// Construa um programa que permita ao usuário escolher 1 das operações matemáticas
//  soma, subtração, multiplicação ou divisão entre 2 números. Não é permitido gerar respostas
// com números negativos. Apresentar a operação escolhida, os números envolvidos e a resposta
// da operação
void calculadora(){

	float num1, num2, resultado;
	int operacao;

	printf("\tCódigo\tOperação\n");
	printf("\t1\tAdição\n");
	printf("\t2\tSubtração\n");
	printf("\t3\tMultiplicação\n");
	printf("\t4\tDivisão\n");

	printf("Digite o operador -> ");
	scanf("%d", &operacao);
	if (!(operacao > 0 && operacao < 5)) {
		printf("Operação inválida");
		printf("\n");
		return;
	}
	printf("Digite os operandos (ex: 2 5)-> ");
	scanf("%f %f", &num1, &num2);

	printf("O resultado de %.2f", num1);

	switch (operacao) {
		case 1: //ADICAO:
			resultado = num1 + num2;
			printf(" + ");
			break;
		case 2: //SUBTRACAO:
			resultado = num1 - num2;
			printf(" - ");
			break;
		case 3: //MULTIPLICACAO:
			resultado = num1 * num2;
			printf(" * ");
			break;
		case 4: //DIVISAO:
			resultado = num1 / num2;
			printf(" / ");
			break;
	}
	if (resultado < 0.00f){
		printf("%.2f é negativo", num2);
	}else{
		printf("%.2f é %.2f", num2, resultado);
	}
	printf("\n");
}

// Faça um programa que leia o numero do cargo e retorne o percentual de aumento do funcionário.
//     cargo   % aumento
//      12         23
//      19         11
//      10         20
//      11         12
//      13         26
//
//  Cuidado que se forem digitados números de outros cargos não constantes na tabela,
//  a pessoa deverá ser avisada.
void calorias() {

	int cargo, aumento = 0;

	printf("\tCargo\tAumento\n");
	printf("\t12\t\t23%%\n");
	printf("\t19\t\t11%%\n");
	printf("\t10\t\t20%%\n");
	printf("\t11\t\t12%%\n");
	printf("\t13\t\t26%%\n");

	printf("Digite o código do cargo -> ");
	scanf("%d", &cargo);

	switch (cargo){
		case 12:
			aumento = 23;
			break;
		case 19:
			aumento = 11;
			break;
		case 10:
			aumento = 20;
			break;
		case 11:
			aumento = 12;
			break;
		case 13:
			aumento = 26;
			break;
		default:
			printf("Cargo inválido\n");
			return;
	}

	printf("Os trabalhadores do cargo do código %d receberão %d%% de aumento\n", cargo, aumento);
}

// Escreva um programa que informe se o número é múltiplo de 3 ou de 7. Informar se não for de nenhum deles.
void multiplo(){
	int num = 0;

	printf("Digite um numero -> ");
	scanf("%d", &num);

	if (num % 3 == 0 || num % 7 ==0) {
		printf("%d é multiplo de 3 ou de 7!", num);
	} else {
		printf("%d não é multiplo de 3 e 7!", num);
	}
	printf("\n");
}
