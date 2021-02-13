#include <stdio.h>
#include <stdlib.h>

void media(float p1, float p2, float p3, char opcao, float *medias){
	
	switch (opcao)
	{
		case 'A':
			*medias = (p1 + p2 +p3) /3;
			break;
		case 'P':
			*medias = ((p1 * 5) + (p2 * 3) + (p3 * 2)) / (5 + 3 + 2);
			break;
		case 'H':
			*medias = 3 / ((1 / p1) +(1 / p2) + (1 / p3));
			break;
		default:
			printf ("Valores com a opcao invalida, informe: \n A - Media aritimetica.\n P - Media Ponderada. \n H - Media harmonica ");
			break;
	}
}

char situacaox (float p1, float p2, float p3, int aulas, int faltas, char opcao, float *mediap){
	float pfaltas;
	
	media (p1, p2, p3, 'A', mediap);
	pfaltas = faltas * 100 / aulas;
	if (pfaltas < 0.25){
	}
	else {
		return 'F';
	}
}

int main (void) {
	
	float p1, p2, p3, *mediafinal;
	int aulas, faltas;
	char opcao, situacaodisci;
	
	printf ("Informe o numero de aulas da disciplina: ");
	scanf ("%d", &aulas);
	
	printf ("Informe o numero de faltas do aluno: ");
	scanf ("%d", &faltas);
	
	printf ("Informe a primeira nota do aluno: ");
	scanf ("%f", &p1);
	
	printf ("Informe a segunda nota do aluno: ");
	scanf ("%f", &p2);
	
	printf ("Informe a terceira nota do aluno: ");
	scanf ("%f", &p3);
	
	printf ("Informe a opcao para media: \n A - Media aritimetica.\n P - Media Ponderada. \n H - Media harmonica ");
	scanf ("%s", &opcao);
	opcao = toupper(opcao);
	
	situacaodisci = situacaox (p1, p2, p3, aulas, faltas, opcao, mediafinal);
		if (situacaodisci = 'A'){
			printf ("Aprovado");
		}
		else if (situacaodisci = 'R'){
			printf("Reprovado por nota.");
		}
		else {
			printf("Reprovado por falta.");
		}	
}
	
