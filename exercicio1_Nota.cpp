#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
	
	/*Crie um algor�tmo que leia dois valores inteiros e os
	armazena em duas vari�veis. Logos ap�s, o programa
	troca valores contids nas vari�veis entre si e os
	exibe ao us�rio*/
	
	setlocale(LC_ALL,"Portuguese");
	
	int num1,num2;
	
	printf("**********Atividade valendo nota - Exerc�cio 1**********\n\n");
	printf("Informe o primeiro n�mero: ");
	scanf("%d", &num1);
	printf("\nInforme o segundo n�mero: ");
	scanf("%d", &num2);
	
	printf("\nN�mero 1: %d e N�mero 2: %d\n\n", num2, num1);
	
	system("pause");
	return 0;
}
