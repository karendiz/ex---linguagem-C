#include<stdio.h>

typedef struct {
		int matricula;
		char nome[100];
		float nota1;
		float nota2;
} Aluno;

int main()
{
	Aluno aluno_tds[2];
	int i;
	
	for(i=0; i<=3; i++){
		printf("Digite o seu nome: ");
		scanf("%s", aluno_tds[i].nome);
		printf("Digite a sua matricula: ");
		scanf("%d", &aluno_tds[i].matricula);
		printf("Digite a a nota 1: ");
		scanf("%f", &aluno_tds[i].nota1);
		printf("Digite a a nota 2: ");
		scanf("%f", &aluno_tds[i].nota2);
	}
	for (i = 0; i <3; i++){
	printf("Nome: %s Matricula: %d Nota 1: %f e Nota 2: %f", aluno_tds[i].nome, aluno_tds[i].matricula, aluno_tds[i].nota1, aluno_tds[i].nota2 );
	}
};
