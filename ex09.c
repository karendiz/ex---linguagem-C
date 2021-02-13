#include<stdio.h>

main(){
	int x ,n, potencia, contador;
	
	printf("Digite o valor de x");
	scanf("%d", &x);
	printf ("digite o valor de n");
	scanf("%d", &n);
	
	potencia = 1;
	contador = 0;
	
	while(contador!=n){
		potencia = potencia * x;
		contador++;
		
	}
	printf("%d", potencia);
}
		
