// Considerei que cwb = curitiba com taxa de 7%
// pg = pontagrossa com taxa de 3%

#include <stdio.h>

int main(){

    int pg = 311611, cwb = 1765000, c = 0;
   
    while(pg<cwb)
    {
    	pg=pg*1.03;
		cwb=cwb*1.07;
    	c=c+1;
    	
	printf("\nContagem do Ano %d\t PG = %d\t CWB = %d", c, pg, cwb);
    }
    printf("\nSao necess. %d anos para que a populacao de PG ultrapasse ou iguale a de CWB", c);
   
}
