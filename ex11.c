#include <stdio.h>

//numero primo = divisivel por 1 e ele mesmo
// numero de divisores = 2

main(){
	
	int i, numero, contador;
	
	printf("Digite um numero: ");
	scanf("%d",&numero);

	while(i <= numero){
		if(numero % i == 0){
		contador++;
		printf("%d", numero);	
		}
	else{
	}		
}
}
