#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*Em �pocas  de pouco dinheiro, os comerciantes est�o
procurando aumentar suas vendas oferecendo desconto.

Fa�a um algoritmo que possa entrar com o valor de um
produto e escreva o novo valor tendo em vista que o
desconto foi de 9%.*/

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	double valorProduto;
	
	printf("**********Atividade valendo nota - Exerc�cio 10**********\n\n");
	
	printf("Valor do produto R$ ");
	scanf("%lf", &valorProduto);
	
	printf("\nO novo valor do produto %.2lf\n\n",valorProduto*0.91);
	
	system("pause");
	return 0;
}
