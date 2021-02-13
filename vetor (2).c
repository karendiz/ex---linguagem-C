#include <stdio.h>

int almatricula(){
	int matricula, igualse=0;
	
	while(igualse==0){
		printf("Digite um numero inteiro para a matricula do aluno: ");
		scanf("%d", &matricula);
		if (matricula>0){
		igualse=1;
		}else{
			printf("Numero de matricula invalida, digite novamente: ");
		}		
	}
	return matricula;
}
float alnotas (int n){
	float nota;
	int igualse = 0;
		
	while(igualse==0){
		printf("Digite a nota %d do aluno: ", n);
		scanf("%f", &nota);
		if (nota >=0 && nota <=100){
			igualse=1;
		}else{
			printf("Nota invalida, digite novamente:\n ");
		}		
	}
	return nota;
}

main(){
	int i, num =6, matricula, matriculas[num];
	float n1, n2, notas1[num], notas2[num], mediasal, mediastu = 0, mediatotal;
	
	for (i=0; i<num; i++){
		matricula = almatricula();
		matriculas [i]=matricula;
		n1 = alnotas(1);
		notas1[i]=n1;
		n2 = alnotas(2);
		notas2[i]=n2;
	}
	for (i=0;i<num;i++){
		mediasal = (notas1[i] + notas2[i])/2;
		printf("\nNumero Matricula: %d\t Nota01: %.2f\t Nota02: %.2f\t NotaFinal: %.2f\t", matriculas[i],notas1[i],notas2[i], mediasal);
			
		mediastu = mediasal + mediastu;
	}
	mediatotal = (mediastu/num);
	printf("\nMedia da turma eh: %.2f", mediatotal);
	
	for(i=0;i<num;i++){
		mediasal = (notas1[i]+notas2[i])/2;
		if(mediasal<mediatotal){
			printf("\nNumero de alunos com nota inferior a media eh %d", matriculas[i]);
		}
	}
}

