#include<stdio.h>

main(){
	float nota1;
	float nota2;
	float media;
	
	printf ("Digite o valor nota1: ");
	scanf ("%f", &nota1);
	
	printf ("Digite o valor nota2: ");
	scanf ("%f", &nota2);
	
	media = (nota1+nota2)/2;
	
	if(media<40){
		printf("Foi Reprovado");
	}
	else{
		if((media >=41) && (media <=69)){
			printf("Em Recuperacao");
				}else{
					printf("Foi Aprovado");
				}
			}
}
