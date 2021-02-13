#include<stdio.h>

main(){
	float idade;
	float peso;
	
	printf ("Qual a sua idade?: ");
	scanf ("%f", &idade);
	
	printf("Qual o seu peso?: ");
	scanf ("%f", &peso);
	
	if((idade>=16) && (idade<=69) && (peso>=50)){
		printf("Voce pode doar sangue\n");
	}
	else{
		printf("Voce nao pode doar sangue");
	}

}
