#include <stdio.h>

main(){

    int valor, fatorial, n;
   	printf("Digite um numero N para ver seu fatorial: ");
   	scanf("%d", &valor);
   	
    fatorial=1;
    n=valor;
    
    while(n>0)
    {
    	fatorial = fatorial*n;
    	n--;
    }	
	printf("\nO fatorial de %d eh: %d", valor, fatorial);

}
