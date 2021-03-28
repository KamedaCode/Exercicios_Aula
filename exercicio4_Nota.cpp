#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*Ler uma temperatura em graus celsius e
apresentá-la convertida em graus Fahrenheit*/

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int temperatura, conversao;
	
	printf("**********Atividade valendo nota - Exercício 4**********\n\n");
	
	printf("Informe a sua temperatura local em graus celsius: ");
	scanf("%d", &temperatura);
	
	conversao = (9*temperatura + 160)/5;
	
	printf("\nA temperatura em Fahrenheit é %dºF\n\n", conversao);
	
	system("pause");
	return 0;
}
