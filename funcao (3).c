#include <stdio.h>

int fprimo (int n){
	int i, cont =0;
	for (i = 1; i<=n; i++){
		if (n % i == 0) {
			cont++;
		}
	}
	if (cont == 2) {
		return 1;
	}
	else{
		return 0;
	}
}

int main(){
	int p, retorna;
	printf ("Digite um numero para saber se eh primo: ");
	scanf("%d", &p);
		
		retorna = fprimo (p);
	
	if (retorna == 1) {
		printf ("O numero eh primo\n");
	}
	else{
		printf ("O numero nao eh primo\n");
		}
}
	
