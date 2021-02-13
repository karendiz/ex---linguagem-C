#include<stdio.h>

main(){
	float custo;
	float faturamento;
	
	printf ("Digite o valor do Custo: ");
	scanf ("%f", &custo);
	
	printf ("Digite o valor do Faturamento: ");
	scanf ("%f", &faturamento);
	
	if((custo<faturamento)){
		printf("Obteve Faturamento");
	}
	else{
		printf("Obteve Prejuizo");
	}

}
