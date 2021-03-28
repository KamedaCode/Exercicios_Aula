#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*Crie um algoritmo que receba os valores para
xnum1, xnum2 e xnum3, calcule e exiba o valor de x,

sabendo-se que: x = xnum1+(xnum2/(xnum3+xnum1))+2*(xnum1-xnum2)*/

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	double xnum1, xnum2, xnum3, x;
	
	printf("**********Atividade valendo nota - Exercício 8**********\n\n");
	
	printf("Informe o primeiro número: ");
	scanf("%lf", &xnum1);
	printf("Informe o segundo número: ");
	scanf("%lf", &xnum2);
	printf("Informe o terceiro número: ");
	scanf("%lf", &xnum3);
	
	x = xnum1+(xnum2/(xnum3+xnum1))+2*(xnum1-xnum2);
	
	printf("\nO cálculo da operação é: %.2lf\n\n", x);
	
	system("pause");
	return 0;
}
