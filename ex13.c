#include<stdio.h>

main(){
	
	int i;
	float n, j, f, total;
	
	printf("Qual foi o capital inicial que voce investiu?:  ");
	scanf("%f", &n);
	
	printf("Qual foi a taxa de juros cobrada?:  ");
	scanf("%f", &j);
	
	f = 1 + j / 100;
	total = n;
	
	for (i = 1; i <= 12; i++){
		total *= f;
		printf("\nNo mes %2d Voce recebe um total de: %.2f\n ", i, total);
	}
}
