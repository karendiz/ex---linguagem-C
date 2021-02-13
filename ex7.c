#include<stdio.h>

main(){
	float numerototal;
	float brancos;
	float nulos;
	float validos;
	float pbrancos;
	float pnulos;
	float pvalidos;

	printf("digite o numero total: ");
	scanf("%d", &numerototal);
	printf("digite brancos: ");
	scanf("%d", &brancos);
	printf("digite nulos: ");
	scanf("%d", &nulos);
	printf("digite validos: ");
	scanf("%d", &validos);
	
	brancos = (brancos/numerototal)*100;
	nulos = (nulos/numerototal)*100;
	validos = (validos/numerototal)*100;
	
	printf("o percentual eh: \n brancos: %.2f  \n nulos: %.2f  \n validos: %.2f ", brancos, nulos, validos);
	
}
