#include<stdio.h>

typedef struct {
		int rg;
		char nome[100], sobrenome[100];
		float datanasc [10];
		float dataadm [10];
		float salario;

} Empregado;

int main()
{
	Empregado new_empregado[10];
	int i;
	
	for(i=0; i<=2; i++){
		printf("Digite o seu Nome: ");
		scanf("%s", new_empregado[i].nome);
	
		printf("Digite o seu Sobrenome: ");
		scanf("%s", new_empregado[i].sobrenome);
	
		printf("Digite o seu RG: ");
		scanf("%d", &new_empregado[i].rg);
		
		printf("Digite sua data de Nascimento: ");
		scanf("%f", &new_empregado[i].datanasc);
		
		printf("Digite a data de Admissao: ");
		scanf("%f", &new_empregado[i].dataadm);
		
		printf("Digite o seu Salario: ");
		scanf("%f", &new_empregado[i].salario);
	}
	for(i=0; i<=2; i++){
	printf("Nome: %s Sobrenome: %s RG: %d Data Nascimento: %f Data Admissao: %f Salario: %f", new_empregado[i].nome, new_empregado[i].sobrenome, new_empregado[i].rg, new_empregado[i].datanasc, new_empregado[i].dataadm, new_empregado[i].salario);
	}
};
