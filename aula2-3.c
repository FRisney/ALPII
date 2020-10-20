#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	int num, pred, suss;
	printf("Digite um número: ");
	scanf("%i", &num);
	pred = num -1;
	suss = num +1;
	printf("predecessor: %i | sucessor: %i", pred, suss);
	printf("\n");
	return 0;
}
