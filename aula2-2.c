#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int nums [4];
	float valor = 0;
	printf("Digite quatro números, separados por espaco > ");
	scanf("%i %i %i %i", &nums[0], &nums[1], &nums[2], &nums[3]);
	for(int i=0; i<4; i++) {
		valor += nums[i];
	}
	valor /= 4;
	printf("A media aritmetica e %.2f", valor);
	printf("\n");
	return 0;
}
