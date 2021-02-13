#include <stdio.h>

//Fib (n) = Fib(n-1) + Fib(n-2)para n > 1

int fibonacci(int n){
   if(n ==1 || n ==2)
       return 1;
   else
       return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
	int i, n;
	
	printf("Digite um numero para ver a sequencia");
	scanf("%d", &n);
	printf("\nA sequência de Fibonacci eh: \n");
   		for(i=0; i<n; i++)
       	printf("%d ", fibonacci(i+1));	
    
    return 0;
} 
