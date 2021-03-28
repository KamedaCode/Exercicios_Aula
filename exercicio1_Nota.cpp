#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
	
	/*Crie um algorítmo que leia dois valores inteiros e os
	armazena em duas variáveis. Logos após, o programa
	troca valores contids nas variáveis entre si e os
	exibe ao usário*/
	
	setlocale(LC_ALL,"Portuguese");
	
	int num1,num2;
	
	printf("**********Atividade valendo nota - Exercício 1**********\n\n");
	printf("Informe o primeiro número: ");
	scanf("%d", &num1);
	printf("\nInforme o segundo número: ");
	scanf("%d", &num2);
	
	printf("\nNúmero 1: %d e Número 2: %d\n\n", num2, num1);
	
	system("pause");
	return 0;
}
