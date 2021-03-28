#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*Fazer um algoritmo que receba o saldo de uma
aplicação e escreve o novo saldo, considerando o
reajuste de 1%*/

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	double saldoAplicacao;
	
	printf("**********Atividade valendo nota - Exercício 7**********\n\n");
	printf("Informe o saldo da sua aplicação: R$ ");
	scanf("%lf", &saldoAplicacao);
	
	printf("\nO novo saldo da sua aplicação após o reajuste de 1 porcento %.2lf\n\n", saldoAplicacao*0.99);
	
	system ("pause");''
	return 0;
}
