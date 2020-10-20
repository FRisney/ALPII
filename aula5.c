//
// Template para producao das atividades em C
//

// Declaracao de bibliotecas
#include <stdio.h>
#include <math.h>
#include <locale.h>

// Declaracao inicial de funcoes
void alfandega();
void studeo();

int main() {
	setlocale(LC_ALL, "Portuguese"); // Configurar suporte a caracteres UTF-8
	int escolha, loop;

	// Escrever as opcoes
	printf("1 - Alfandega\n");
	printf("2 - Studeo\n");

	// Perguntar pelo loop
	printf("Executar em loop? (0-não) ( maior que 0-sim) > ");
	scanf("%i", &loop); // Ler a opcao escolhida

	do{
	printf("Digite o número da atividade > ");
	scanf("%i", &escolha);
	switch (escolha) {
		case 1:
			alfandega();
			break;
		case 2:
			studeo();
			break;
		default:
			printf("Opcao invalida - encerrando.\n");
			loop = 0;
			break;
	} // fim switch
	}while(loop);
	return 0;
} // fim main

// Definicao das funcoes
void alfandega() {
	printf("|UF\t|Tarifa\t|\n|1\t|20\t|\n|2\t|15\t|\n|3\t|10\t|\n|4\t|05\t|\n");
	printf("\n|Cod\t\t|Preco\t|\n|10 a 20\t|180\t|\n|21 a 30\t|120\t|\n|31 a 40\t|230\t|\n");
	printf("Insira o código do estado de origem da carga de um caminhão, o peso da carga em toneladas(1000 Kg) e o código da carga. Respectivamente e separados por espacos \n");
	int uf, peso, carga;
	float imp, precot, preco;
	scanf("%i %i %i", &uf, &peso, &carga);
	peso*=1000;
	/* Calcule e apresente:
	o peso da carga em quilos
	o preço da carga
	o valor do imposto
	o valor total da carga(preço da carga + impostos). */
	if(uf<1||uf>4){
		printf("Codigo de estado invalido");
	}else if(uf == 1) {
		imp = 20 / 100.0f;
	}else if(uf == 2){
		imp = 15 / 100.0f;
	}else if(uf == 3){
		imp = 10 / 100.0f;
	}else if(uf == 4){
		imp = 5 / 100.0f;
	}
	printf("%f", imp);
	if(carga<10||carga>40){
		printf("Codigo invalido");
	}else if(carga >= 10 && carga <= 20) {
		preco = 180 * peso;
	}else if(carga >= 21 && carga <= 30){
		preco = 120 * peso;
	}else if(carga >= 31 && carga <= 40){
		preco = 230 * peso;
	}
	imp = preco * imp;
	printf("%.1f", imp);
	precot = imp + preco;
	printf("\nA carga N.%d, saiu do estado N.%d, pesando %dKg, será tarifada em R$%.2f e custará ao todo R$%.2f\n", carga, uf, peso, imp, precot);
}

void studeo() {
	int ra, n1, n2, n3, n4;
	float media;
	/* Elabore um programa que leia o RA do aluno, suas 4 notas e calcule a média final. Se o aluno entrou pelo studeo, apresentar a mensagem "procedimento correto". Caso o aluno tenha entrado apenas pelo classroom, a apresentar a mensagem "se liga senão ganha falta". Apresentar RA e media do aluno*/
	printf("RA: ");
	scanf("%i", &ra);
	printf("Notas: n1 n2 n3 n4\n");
	scanf("%i %i %i %i", &n1, &n2, &n3, &n4);

	media = (n1 + n2 + n3 + n4) / 4;
}
