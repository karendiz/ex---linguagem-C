#include<stdio.h>

main(){
	int valor;
	int n2 = 0;
	int total;
   	float total2;
	int n;
	
   printf("Digite um numero qualquer para saber a soma de n termos de Euler: ");
   scanf("%d", &valor);
	
   while(n2<=valor){
   		
   		n = n2;
   		printf("1 %d\n = ", n2);
   		total = 1;
   		
   		while(n>=1){
   			total=n*total;
   				printf("%d*", n);
   			n--;
   		}
   		
   		printf(" eh %d", total);
   		
		total2 = total2 + (1.00/total);
   		n2++;
   }
	printf("O valor total eh: %f\n ", total2);
	
}

