#include <stdio.h>

void soma_par_impar();
void aumento_percentual();
void classe_eleitoral();

int main() {
	int escolha, loop;
	printf("executar em loop? (0-nao) (num>0-sim) > ");
	scanf("%i", &loop);
	/* printf(); */
	do{
	printf("Digite o numero da atividade > ");
	scanf("%i", &escolha);
	switch (escolha) {
		case 1:
			soma_par_impar();
			break;
		case 2:
			aumento_percentual();
			break;
		case 3:
			classe_eleitoral();
			break;
		default:
			printf("Opcao invalida - encerrando.\n");
			loop = 0;
			break;
	}
	}while(loop);
	return 0;
}

/* Entrar com 2 números inteiros, somá-los e verificar se a soma é par ou ímpar. */
/*    Se a soma for par, acrescentar 2 no valor e apresentar valor final.  Se a  soma */
/*    for ímpar, acresentar 3 no valor final e apresentar a soma */
void soma_par_impar() {
	int a, b;

	printf("Digite dois numeros separados por espaco >");
	scanf("%d %d", &a, &b);

	int sum = a + b;

	if(sum % 2 == 0)
		sum += 2;
	else
		sum += 5;
	printf("O resultado eh: %d", sum);
	printf("\n");
	return;
}

/* Faça um programa que leia o numero do cargo e retorne o percentual de aumento do funcionário. */
/*     cargo   % aumento */
/*      12         23 */
/*      19         11 */
/*      10         20 */
/*      11         12 */
/*      13         26 */
/*  Cuidado que se forem digitado números de outros cargos, a pessoa deve ser avisada. */
void aumento_percentual(){
	int cargo, aumento;
	printf("Digite o numero do cargo > ");
	scanf("%d", &cargo);
	switch (cargo) {
		case 12:
			aumento = 13;
			printf("\n");
			break;
		case 19:
			aumento = 11;
			printf("\n");
			break;
		case 10:
			aumento = 20;
			printf("\n");
			break;
		case 11:
			aumento = 12;
			printf("\n");
			break;
		case 13:
			aumento = 26;
			printf("\n");
			break;
		default:
			printf("O numero nao representa um cargo valido\n");
			return;
	}
	printf("Aumento de %d%%", aumento);
}

/* Escreva um programa que leia a idade de uma pessoa e informe sua classe eleitoral. */
/*    <16 anos - não eleitor, >=18 e <=65 - eleitor obrigarório, >=16 e <18 e >65 - eleitor */
/* facultativo. */
void classe_eleitoral() {
	int idade;
	printf("Digite a idade > ");
	scanf("%i", &idade);
	if (idade <= 16) {
		printf("Nao eleitor");
		printf("\n");
	}else if(idade < 18 || idade >= 65){
		printf("Eleitor facultativo");
		printf("\n");
	}else{
		printf("Eleitor obrigarorio");
		printf("\n");
	}
}
