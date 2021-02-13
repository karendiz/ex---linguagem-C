#include<stdio.h>

main(){
	float celsius;
	float fahrenheit;
	
	printf ("Digite uma temperatura em Fahrenheit: ");
	scanf ("%f", &fahrenheit);
		
	celsius = (fahrenheit-32)*5/9;
	
	printf("A temperatura em Celsius eh: %2.f\n", celsius);

	if(celsius<0){
		printf("Esta Congelante\n");
	}
	else{
		if((celsius >=0) && (celsius <=10)){
			printf("Muito Gelado\n");
		}else{
			if((celsius >=10) && (celsius <=20) ){
				printf("Gelado\n");
			}else{
				if((celsius>=20) && (celsius<=30) ){
					printf("Quente\n");
					
				}if((celsius>=30) && (celsius<=40) ){
					printf("Muito Quente\n");
	
				}else{
					if(celsius>40){
					printf("Derretendo\n");
				}
			}
		}
	}
}
}

