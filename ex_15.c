#include<stdio.h>

main(){
	int cargo;
	float salarioatual;
	float salarionovo;
	float diferenca;
	
	printf ("Digite o codigo do cargo: ");
	scanf ("%d", &cargo);
	
	printf ("Digite o salario atual: ");
	scanf ("%f", &salarioatual);
	
	switch(cargo){
		
		case 101:
			diferenca = salarioatual*10/100;
			salarionovo=diferenca+salarioatual;
		break;
		case 102:
			diferenca = salarioatual*20/100;
			salarionovo=diferenca+salarioatual;
		break;
		case 103:
			diferenca = salarioatual*30/100;
			salarionovo=diferenca+salarioatual;
		break;
		default:
			diferenca = salarioatual*40/100;
			salarionovo=diferenca+salarioatual;
	}
		printf("O salario antigo eh de: %.2f\n O salario novo eh de: %.2f\n E a diferenca entre eles eh de: %.2f", salarioatual, salarionovo, diferenca);

}
