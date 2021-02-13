#include<stdio.h>

main(){
	
	int i, numero, contador = 0;
	
	printf("Digite um numero para saber se eh primo: ");
	scanf("%d",&numero);

	for(i= 1; i <= numero; i++){
		if(numero % i == 0){
		 contador++;
		}
	
	}
	if (contador == 2){
		printf("%d eh um numero primo", numero);	
	}
	else{
		printf("%d nao eh um numero primo\n", numero);
	}
}
