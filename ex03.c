#include <stdio.h>

main(){

    int numero, resto = 0;

    for(numero = 0; numero <=20; numero++){
        resto = numero % 2;
        
        if(resto)
            printf("%d\n", numero);
    }

}
