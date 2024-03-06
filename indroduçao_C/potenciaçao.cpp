#include<stdio.h>

int main(){

int x,
    n,
    potencia,
    contador;
    
    printf("calculo de potencias\n");
    printf ("digite um numero inteiro");
    scanf("%d", &x);
    printf ("digite um numero inteiro nao negativo");
    scanf("%d", &n);
    
    potencia = 1;
    contador = 0;
    
    while (contador != n){
    	potencia = potencia * x;
    	contador = contador + 1;
	}
	
	printf("\n valor de %d elevado a %d :%d\n", x, n, potencia);

}
/*int base, expoente;
  printf("digite a base:")
  scanf("%d", & base);
  printf("digite o expoente:);
  scanf("%d", & expoente);
  
  
  
  int total = base;
  
  
  if(expoente==0){
  total=1;
  }else{
  
  while(expoente > 1) {
 total *= base;
 expoente--; 
  }

printf("total eh %d", total);
}*/
