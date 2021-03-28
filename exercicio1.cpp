#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	char aluno[100],endereco[100];
	double numeroMatricula;
	
	
	printf("***************Informações matrícula aluno***************\n\n");
	
	printf("Informe o seu número de matrícula: ");
	scanf("%lf", &numeroMatricula);
	fgetc(stdin);//Permite que a função, não pule uma linha após chamar um valor numérico.
	
	printf("\nInforme o nome do aluno: ");
	fgets(aluno, sizeof(aluno), stdin);
	aluno[strlen(aluno)-1] = 0;//Essa função permite que não haja quebra de linha entre os comandos.
	
	printf("\nInforme o seu endereço: ");
	fgets(endereco, sizeof(endereco), stdin);
	endereco[strlen(endereco)-1] = 0;
	
	printf("\nO aluno %s que mora na %s com o número de matrícula: %.0lf\n\n", aluno, endereco, numeroMatricula);
	
	system("pause");
	return 0;
	
}
