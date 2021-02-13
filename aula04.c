#include<stdio.h>

main(){
	int x,y;
	
	printf ("Digite o valor de X: ");
	scanf ("%d", &x);
	
	printf ("Digite o valor de Y: ");
	scanf ("%d", &y);
	
	if(x!=y){
		printf("Sao diferentes");
	}
	else{
		printf("Sao iguais");
	}

}
