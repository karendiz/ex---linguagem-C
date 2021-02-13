main(){
  
  int i, n, operador;
  
   printf("Digite um numero");
	scanf("%d", &numero);

   double pi = 4;
   double operador = -1;

   double i;
   for(i = 0; i <=numero; i++){
      pi += operador*(4/(3+2*i));

      operador *= -1;
   }

   printf("Resultado: %d\n", pi);

}
