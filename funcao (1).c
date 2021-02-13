#include <stdio.h>

void inteiropositivo (int n){
	if (n > 0) {
		printf("O numero digitado %d eh um numero inteiro positivo\n", n);
	}
	else{
		printf("O numero digitado %d nao eh um numero inteiro positivo\n", n);
	}
}

void divisaointeiropositivo (int p){
	int i;
	int soma = 0;
	for (i = 1; i < p; i++){
		if((p % i) == 0){
		soma = soma + i;
		}
	}
	printf ("A soma dos seus dividores eh %d\n\n", soma);
}

int main (){
	int numero, i;
	
	for(i = 0; i <5 ; i++){
		printf ("Digite um numero inteiro e positivo\n");
		scanf("%d", &numero);

	inteiropositivo(numero);

	divisaointeiropositivo(numero);
	}
}



