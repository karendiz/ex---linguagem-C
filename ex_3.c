#include<stdio.h>

main(){
	float celsius;
	float fahrenheit;
	
	printf ("Digite uma temperatura em Celsius: ");
	scanf ("%f", &celsius);
		
	fahrenheit = celsius*(9/5) + 32;
	
	printf("A temperatura em fahrenheit eh: %3.f", fahrenheit);

}
