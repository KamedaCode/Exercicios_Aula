#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	char aluno[100],endereco[100];
	double numeroMatricula;
	
	
	printf("***************Informa��es matr�cula aluno***************\n\n");
	
	printf("Informe o seu n�mero de matr�cula: ");
	scanf("%lf", &numeroMatricula);
	fgetc(stdin);//Permite que a fun��o, n�o pule uma linha ap�s chamar um valor num�rico.
	
	printf("\nInforme o nome do aluno: ");
	fgets(aluno, sizeof(aluno), stdin);
	aluno[strlen(aluno)-1] = 0;//Essa fun��o permite que n�o haja quebra de linha entre os comandos.
	
	printf("\nInforme o seu endere�o: ");
	fgets(endereco, sizeof(endereco), stdin);
	endereco[strlen(endereco)-1] = 0;
	
	printf("\nO aluno %s que mora na %s com o n�mero de matr�cula: %.0lf\n\n", aluno, endereco, numeroMatricula);
	
	system("pause");
	return 0;
	
}
