#include<stdio.h>

main(){
	int x;
	int y;
	float porcentagem;
	
	printf ("Digite o valor de X: ");
	scanf ("%d", &x);
	
	printf ("Digite o valor de Y: ");
	scanf ("%d", &y);
	
	porcentagem = ((y*100 / x));
	
	printf("Y eh igual a %2.f por cento de X", porcentagem);
}
