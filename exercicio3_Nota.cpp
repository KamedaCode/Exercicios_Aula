#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*Crie um algoritmo que receba quatro n�meros e
imprima a m�dia ponderada, sabendo-se que os pesos
s�o rescpectivamente: 1, 2, 3 e 4*/

int main (){
	
	setlocale(LC_ALL, "Portuguese");
	
	double num1,num2,num3,num4,mp;
	
	//mp = M�dia Ponderada
	
	printf("********************Atividade valendo nota - Exerc�cio 3********************\n\n");
	
	printf("Vamos realizar a m�dia ponderada utilizando os seguintes pesos 1,2,3,e 4");
	printf("\n\nInforme o primeiro n�mero: ");
	scanf("%lf", &num1);
	printf("Informe o segundo n�mero: ");
	scanf("%lf", &num2);
	printf("Informe o terceiro n�mero: ");
	scanf("%lf", &num3);
	printf("Informe o quarto n�mero: ");
	scanf("%lf", &num4);
	
	mp = (num1*1 + num2*2 + num3*3 + num4*4)/(1+2+3+4);
	
	printf("\nA M�dia Ponderada �: %.2lf\n\n", mp);
	
	
	system("pause");
	return 0;
}
