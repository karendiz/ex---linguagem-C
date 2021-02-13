#include<stdio.h>

main(){
	float ovo;
	float ovo_duzia;
	int ovostotal;
	int qtd_duzia;
	float resto;
	float total;

	printf ("Digite a quantidade de ovos que foram comprados: ");
	scanf ("%d", &ovostotal);
	
	ovo = 0.50;
	ovo_duzia = 0.25;
		
	if(ovostotal>=12){
		qtd_duzia = ovostotal/12;
		if(qtd_duzia>0){
			resto= ovostotal - (qtd_duzia*12);
			total = qtd_duzia*12*ovo_duzia+(resto*ovo);
		}
	}
	else{
		total = ovostotal*ovo;	
	}
	printf("O valor total da compra eh: %.2f", total);
	
}
