#include <stdio.h>

main(){

       int matriz[3][3], linha, coluna;
       
	   for (linha=0; linha<3; linha++){
           for (coluna=0; coluna<3; coluna++){
           	
			   printf("Digite um valor inteiro para a Linha %d na Coluna %d: ", linha+1, coluna+1);
               scanf("%d", &matriz[linha][coluna]);
           }
       }
       printf("\nMatriz: \n"); 
	   for(linha=0;linha<3;linha++){
	   	printf("["); 
       		for(coluna=0;coluna<3;coluna++){
       			printf(" %d ", matriz[linha][coluna]);
       		}
       		printf("]\n");
    	}
    	printf("\nMatriz Transposta: \n");
    	for(coluna=0;coluna<3;coluna++){
    		printf("[");
    		for(linha=0;linha<3;linha++){
    			printf(" %d ", matriz[linha][coluna]);
    		}
    		printf("]\n");
    	}
}

