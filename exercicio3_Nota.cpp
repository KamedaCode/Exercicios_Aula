#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*Crie um algoritmo que receba quatro números e
imprima a média ponderada, sabendo-se que os pesos
são rescpectivamente: 1, 2, 3 e 4*/

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	double num1,num2,num3,num4,mp;
	
	//mp = Média Ponderada
	
	printf("********************Atividade valendo nota - Exercício 3********************\n\n");
	
	printf("Vamos realizar a média ponderada utilizando os seguintes pesos 1,2,3,e 4");
	printf("\n\nInforme o primeiro número: ");
	scanf("%lf", &num1);
	printf("Informe o segundo número: ");
	scanf("%lf", &num2);
	printf("Informe o terceiro número: ");
	scanf("%lf", &num3);
	printf("Informe o quarto número: ");
	scanf("%lf", &num4);
	
	mp = (num1*1 + num2*2 + num3*3 + num4*4)/(1+2+3+4);
	
	printf("\nA Média Ponderada é: %.2lf\n\n", mp);
	
	
	system("pause");
	return 0;
}
