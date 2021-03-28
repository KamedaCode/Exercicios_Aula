#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*.Escrever um algoritmo para determinar o consumo
médio de um automóvel sendo fornecida o KM rodada
e o total de combustível gasto.

O resultado deverá apresentar a unidade de medida km/l.*/

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	double kmRodado, tcg, resultado; //tcg = Total de Combustível Gasto
	
	printf("**********Atividade valendo nota - Exercício 5**********\n\n");
	printf("Informe a quantidade de km rodado: ");
	scanf("%lf", &kmRodado);
	
	printf("\nInforme o total gasto de gasolina (em Litros): ");
	scanf("%lf", &tcg);
	
	resultado = kmRodado/tcg;
	
	printf("\nO carro fez %.2lf KM/L\n\n", resultado);
	
	
	system("pause");
	return 0;
}
