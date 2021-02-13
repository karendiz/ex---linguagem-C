#include <stdio.h>

main(){

       int matriz[3][3], linha, coluna, valormaior;
       
	   for (linha=0; linha<3; linha++){
           for (coluna=0; coluna<3; coluna++){
           	
			   printf("Digite um valor inteiro para a Linha %d na Coluna %d: ", linha+1, coluna+1);
               scanf("%d", &matriz[linha][coluna]);
           }
       }
              for(linha=0;linha<3;linha++){
       	printf("\n");
       		for(coluna=0;coluna<3;coluna++){
       			printf(" %d ",matriz[linha][coluna]);
       	    }
       	printf("\n");
       }
        for(coluna=0;coluna<3;coluna++){
	   valormaior=0;
       		for(linha=0;linha<3;linha++){
       			if(matriz[linha][coluna]> valormaior){
       				valormaior = matriz[linha][coluna];
       			}
       	    }
       }
    	printf("\nO maior valor esta na coluna %d e eh: %d", coluna,valormaior);
}
