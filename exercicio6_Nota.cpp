#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*Escrever um algoritmo que leia um nome de um
vendedor, o seu sal�rio fixo e o total de vendas
efetuadas por ele em um m�s (em dinheiro). Sabendo que
este vendedor ganha 15% de comiss�o sobre suas
vendas efetuadas. informe o seu nome, o sal�rio fixo e
o sal�rio no final do m�s*/

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	char nomeVendedor[100];
	double salarioFixo, totalVendas, salarioFinal;
	
	printf("**********Atividade valendo nota - Exerc�cio 6**********\n\n");
	printf("Informe o seu nome e sobrenome: ");
	fgets(nomeVendedor,sizeof(nomeVendedor),stdin);
	nomeVendedor[strlen(nomeVendedor)-1] = 0;
		
	printf("\nInforme o seu sal�rio: R$ ");
	scanf("%lf", &salarioFixo);
	
	printf("\nInforme o quanto que o vendedor vendeu: R$ ");
	scanf("%lf", &totalVendas);
	
	salarioFinal = totalVendas*0.15;
	
	printf("\nO vendedor %s com o sal�rio fixo de R$ %.2lf ap�s a comiss�o de 15 porcento de suas\nvendas recebeu R$ %.2lf\n\n", nomeVendedor, salarioFixo, salarioFinal+salarioFixo);
	
	
	system("pause");
	return 0;
}
