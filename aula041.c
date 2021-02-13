#include<stdio.h>

main(){
	float nota1;
	float nota2;
	float nota3;
	float media;
	
	printf ("Digite o valor nota1: ");
	scanf ("%f", &nota1);
	
	printf ("Digite o valor nota2: ");
	scanf ("%f", &nota2);
	
	printf ("Digite o valor nota3: ");
	scanf ("%f", &nota3);
	
	media = (nota1+nota2+nota3)/3;
	
	if((media>8) && (media<=10)){
		printf("Classificacao A");
	}
	else{
		if((media >=7) && (media <=8)){
			printf("Classificacao B");
		}else{
			if((media >=6) && (media <=7) ){
				printf("Classificacao C");
			}else{
				if((media>=5) && (media<6) ){
					printf("Classificacao D");
				}else{
					printf("Classificacao E");
				}
			}
		}
	}
}
