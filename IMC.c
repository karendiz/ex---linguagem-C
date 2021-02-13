#include<stdio.h>
#include<math.h>

float imc(float peso, float altura){
	float imc;
	imc = peso / pow(altura, 2);
	return imc;
}
int main (){
	float p, a, i;
	printf ("Informe seu peso (quilos): ");
	scanf ("%f", &p);
	printf ("Informe sua altura (metros): ");
	scanf ("%f", &a);
	i = imc(p, a);
	printf("Seu IMC eh: %.2f\n", i);	
	if (i <18.5f){
		printf("Abaixo do Peso\n");
	}else if(i <=25.0f){
		printf("Peso Normal\n");
	}else if(i <=30.0f){
		printf("Acima do Peso\n");
	}else{
		printf("Obeso\n");
	}
	return 0;	
}
