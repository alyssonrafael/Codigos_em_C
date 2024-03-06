#include<stdio.h>
                                 //if = SE
main (){
  
  int x;                         // se eu colocar int x=10, y=5 e dps mandar um printf( "o valor de..eh : %d" y,x ele 
                                 // vai mandar a variavel y primeiro 

  printf("por gentileza, informe o valor de x:");

  scanf("%d",&x);                // & descrimina variavel    .
                                 // maior ou menor igual vai ser primeiro o sinal de gandeza (<>)e depois o =   .
  if(x >= 5){                   // quando quiser o proprio numero vai ser ==    .
     printf("o valor de x eh: %d", x);
	 x = x *2;
  }
if (x > 10) {
	printf("\n o valor de x agora eh (%d) eh maior que 10", x);     // \n serve pra pular linha
}

printf("\nfim do programa.");

}
