#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*Escrever um algoritmo que leia um nome de um
vendedor, o seu salário fixo e o total de vendas
efetuadas por ele em um mês (em dinheiro). Sabendo que
este vendedor ganha 15% de comissão sobre suas
vendas efetuadas. informe o seu nome, o salário fixo e
o salário no final do mês*/

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	char nomeVendedor[100];
	double salarioFixo, totalVendas, salarioFinal;
	
	printf("**********Atividade valendo nota - Exercício 6**********\n\n");
	printf("Informe o seu nome e sobrenome: ");
	fgets(nomeVendedor,sizeof(nomeVendedor),stdin);
	nomeVendedor[strlen(nomeVendedor)-1] = 0;
		
	printf("\nInforme o seu salário: R$ ");
	scanf("%lf", &salarioFixo);
	
	printf("\nInforme o quanto que o vendedor vendeu: R$ ");
	scanf("%lf", &totalVendas);
	
	salarioFinal = totalVendas*0.15;
	
	printf("\nO vendedor %s com o salário fixo de R$ %.2lf após a comissão de 15 porcento de suas\nvendas recebeu R$ %.2lf\n\n", nomeVendedor, salarioFixo, salarioFinal+salarioFixo);
	
	
	system("pause");
	return 0;
}
