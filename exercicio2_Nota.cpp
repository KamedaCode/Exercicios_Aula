#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	/*Crie um algoritmo que leia um n�mero inteiro e
	imprima seu sucessor e seu antecessor*/
	
	int numero;
	
	printf("**********Atividade valendo nota - Exerc�cio 2**********\n\n");
	
	printf("\nDigite um n�mero: ");
	scanf("%d", &numero);
	printf("\n\nSeu n�mero: %d, o seu antecessor %d e o seu sucessor %d\n\n", numero, numero-1, numero+1);
	
	system("pause");
	return 0;
}
