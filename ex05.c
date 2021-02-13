#include<stdio.h>

main(){
	int contador, n, soma;
	
	printf("Digite ate o numero que deseja: ");
	scanf("%d",&n);
	soma = 0;
	
	for(contador=1; contador<=(n);contador++){
		if((contador%2)==0){
			soma = soma + contador;
		}	
	}
	printf("Soma: %d", soma);

}
