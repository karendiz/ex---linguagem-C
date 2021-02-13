#include<stdio.h>

// y > x

main(){
	int x ,y;
	
	printf("Digite o valor de x: ");
	scanf("%d", &x);
	printf ("digite o valor de y: ");
	scanf("%d", &y);

	while (x<=y){
	printf("%d\n", x);
	x=x+1;
	}	
}

