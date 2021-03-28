#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	/*Crie um algoritmo que leia um número inteiro e
	imprima seu sucessor e seu antecessor*/
	
	int numero;
	
	printf("**********Atividade valendo nota - Exercício 2**********\n\n");
	
	printf("\nDigite um número: ");
	scanf("%d", &numero);
	printf("\n\nSeu número: %d, o seu antecessor %d e o seu sucessor %d\n\n", numero, numero-1, numero+1);
	
	system("pause");
	return 0;
}
