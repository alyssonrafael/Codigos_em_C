/*atividade if 
            if
            else if
            else if
            else
            */
  
  
#include <stdio.h>  

main(){
	//sugestao do que fazer a partir do nivel da sua dor
	
	int dor;
	printf ("digite um numero de 0 a 10 no qual 10 e o nivel maximo de dor:");
	scanf("%d" , &dor);
	
if(dor==0){
	printf("\n nao esta com dor");
}if(dor==1){
  	printf("\n pouquissima dor");
  } else if(dor==2){
  	printf("\n sua dor e leve");
  }else if(dor==3){
  	printf("\n sua dor ainda e leve");
  }else if (dor==4){
  	printf("\n sua dor esta em nivel medio vamos procurar tratamento");
  }else if (dor==5){
  	printf("\n sua dor esta moderada");
  }else if(dor==6){
  	printf("\n procure um medico");
  }else if(dor==8,7){
  	printf("\n va ao medico imediatamente");
  } else if(dor==9){
  	printf("\n procure ajuda imediata");
  }else if(dor==10){
  	printf("\n como voce esta digitando aqui com o nivel 10 de dor");
  } else {
  	printf("valor invalido");
  }
  }  
 
