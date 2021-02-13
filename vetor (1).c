#include <stdio.h>

int intpositivo(){
	int numero;
	int igualse=0;
	
	while(igualse==0){
		
		printf("Digite 20 numeros inteiro positivos: ");
		scanf("%d",&numero);
		if(numero>0){
			igualse=1;
		}else{
			printf("Valor invalido, digite novamente\n: ");
		}
	}
	return numero;
}

main() { 
    int vetor[20],i, existe=0, buscar, valor;

    for(i=0;i<20;i++){
    	valor =intpositivo();
		vetor[i] = valor; 
    }
    printf("Digite um numero que voce queira encontrar: ");
    scanf("%d",&buscar);
	  
    for (i=1;i<20;i++) {
    	if(buscar==vetor[i]){
            printf("\nO valor %d esta na posicao %d ", vetor[i],i+1);
            existe++;
		}
	}
		if(existe==0){
			printf("\nO valor nao foi encontrado");
		}else{
			printf("\nFoi encontrado no vetor %d vezes o valor %d", existe,buscar);
		}
}

