#include<stdio.h>

main(){
	float valoracao;
	float fracaovendida;
	float valorfinal;
	
	printf ("Digite qual a fracao dessa acao que voce quer vender: ");
	scanf ("%f", &fracaovendida);
	
	valoracao = 2453.42;
	
	if(fracaovendida>100){
		printf("Esse valor ultrapassa a cota dessa acao");
	}
	else{
		valorfinal = (valoracao*fracaovendida)/100;
		printf("O valor dessa fracao da acao fica: %.3f", valorfinal);
	}

}
