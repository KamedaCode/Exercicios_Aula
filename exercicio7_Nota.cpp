#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*Fazer um algoritmo que receba o saldo de uma
aplica��o e escreve o novo saldo, considerando o
reajuste de 1%*/

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	double saldoAplicacao;
	
	printf("**********Atividade valendo nota - Exerc�cio 7**********\n\n");
	printf("Informe o saldo da sua aplica��o: R$ ");
	scanf("%lf", &saldoAplicacao);
	
	printf("\nO novo saldo da sua aplica��o ap�s o reajuste de 1 porcento %.2lf\n\n", saldoAplicacao*0.99);
	
	system ("pause");''
	return 0;
}
