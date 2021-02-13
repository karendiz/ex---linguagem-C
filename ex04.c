#include<stdio.h>

main(){
	int contador, n, soma;
	
	printf("Digite ate o numero que deseja: ");
	scanf("%d",&n);
	soma = 0;
	
	for(contador=1; contador<=(n);contador++){
			soma = soma + contador;	
		}
		printf("Soma: %d", soma);	
	}

