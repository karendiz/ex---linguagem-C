#include<stdio.h>

main(){
	int contador, n, soma = 0;
	printf("Digite ate o numero deseja: ");
	scanf("%d",&n);

	for(contador=1;contador<=(n*2);contador++){
		if((contador%2)==0){
			soma = soma + contador;
		}
	
	}
	printf("Soma: %d", soma);

}
