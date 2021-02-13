#include<stdio.h>

main(){
	int valor;

	printf ("Digite um valor de 1 a 7: ");
	scanf ("%d", &valor);
	
	switch (valor)
	{
		case 1:
		printf("Domingo");
		break;
		case 2:
		printf("Segunda");
		break;
		case 3:
		printf("Terca");
		break;
		case 4:
		printf("Quarta");
		break;
		case 5:
		printf("Quinta");
		break;
		case 6:
		printf("Sexta");
		break;
		case 7:
		printf("Sabado");
		break;
		
		default:
			printf ("Valor invalido");
	}
}
