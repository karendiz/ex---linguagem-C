#include<stdio.h>

main(){
	float lado1;
	float lado2;
	float lado3;
	float triangulo;
	
	printf ("Digite a medida de um dos lados do Triangulo: ");
	scanf ("%f", &lado1);
	
	printf ("Digite outra medida de um dos lados do Triangulo: ");
	scanf ("%f", &lado2);
	
	printf ("Digite a ultima medida de um dos lados do Triangulo: ");
	scanf ("%f", &lado3);
	
	if((lado1==lado2) && (lado2==lado3)){
		printf("Equilatero");
	}
	else{
		if((lado1==lado2) || (lado1==lado3) || (lado2==lado3)){
			printf("Isosceles");
				}
				else{
					if((lado1!=lado2) && (lado1!=lado3) && (lado2!=lado3))
						printf("Escaleno");
				}
			}
			
}
	

