#include<stdio.h>

main(){
	float xmetros;
	float ypes;
	float milha;
	float qtmilhas;
	
	printf ("Digite um valor X em Metros: ");
	scanf ("%f", &xmetros);
	
	ypes = (xmetros*3.2808);
	milha = 5280;
	
	printf("Esse valor X em metros eh igual a Y pes: %2.f\n", ypes);
	
	
	if(ypes>milha){
		printf("Eh maior que uma milha\n");
		qtmilhas = (ypes/milha);
		printf("E Forma: %2.f milhas", qtmilhas);
	}
	else{
		printf("E eh menor que uma milha");
	}

}
