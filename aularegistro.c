#include<stdio.h>

typedef struct {
		int matricula;
		char nome[100];
		float nota1;
		float nota2;
} Aluno;

int main()
{
	Aluno aluno_tds;
	int i;
	printf("Digite o seu nome: ");
	scanf("%s", aluno_tds.nome);
	printf("Digite a sua matricula: ");
	scanf("%d", &aluno_tds.matricula);
	printf("Digite a a nota 1: ");
	scanf("%f", &aluno_tds.nota1);
	printf("Digite a a nota 2: ");
	scanf("%f", &aluno_tds.nota2);
	
	printf("Nome: %s Matricula: %d Nota 1: %f e Nota 2: %f", aluno_tds.nome, aluno_tds.matricula, aluno_tds.nota1, aluno_tds.nota2 );
	
};
