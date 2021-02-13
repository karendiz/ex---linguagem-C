#include <stdio.h>
 
int main() {
    int vet[10], i, maior, posMaior, menor, posMenor;
 
    for (i = 0; i <10; i++) {
    	printf("%d - Digite 10 numeros inteiros: ", i+1);
        scanf("%d", &vet[i]);
    }
 
    maior    = vet[0];
    posMaior = 0;
    for (i = 1; i <10; i++) {
        if (vet[i] > maior) {
            maior    = vet[i];
            posMaior = i;
        }
    }
 
    menor    = vet[10];
    posMenor = 0;
    for (i = 1; i <10; i++) {
        if (vet[i] < menor) {
            menor    = vet[i];
            posMenor = i;
        }
    }
 
    printf("\nVetor =  ");
    for (i = 0; i <10; i++) {
        printf("%d ", vet[i]);
    }
 
    printf("\nO maior valor eh: %d - e esta na posicao: %d", maior, posMaior);
    printf("\nO menor valor eh: %d - e esta na posicao: %d", menor, posMenor);
 
    return 0;
}
