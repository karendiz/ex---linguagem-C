#include <stdio.h>

main(){

    int n, f1=0, f2=1, f3;
   	
	printf("Digite um numero: ");
   	scanf("%d", &n);
   	
    if(n < 0){
    	printf("Numero Invalido");
    }
	else{
	while(f2 < n){
		f3 = f2 + f1;
    	printf("Termo %d\n", f3);
		f1=f2;
		f2=f3;	
    }
	printf("\n");	
	}
}
