#include<stdio.h>

main(){
	int anonascimento;
	int ano;
	
	printf ("Digite o ano do seu nascimento: ");
	scanf ("%d", &anonascimento);
	
	ano = 2020-anonascimento;
	
	if((ano>=10) && (ano<=14)){
		printf("Infantil");
	}
	else{
		if((ano >=15) && (ano <=17)){
			printf("Juvenil");
		}else{
			if((ano >=18) && (ano <=60)){
				printf("Adulto");
			}else{
				if((ano>=60) && (ano>60)){
					printf("Idoso");
				}
			}
		}
	}

}
