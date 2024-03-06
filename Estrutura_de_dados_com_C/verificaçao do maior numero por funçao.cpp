#include<stdio.h>
//função que faz a comparação dos dois numeros
int retmenor(int a, int b){ 
    if(a > b){
	return a;
	}else{return b;} 
}

 int main(){
  int numero1, numero2;
  int resuldado;
 printf("digite o primeiro numero para verificar:");
 scanf("%d",&numero1);
 printf("digite o segundo numero para verificar:");
 scanf("%d",&numero2);
 	
 resuldado = retmenor(numero1, numero2);
 
 printf("o maior numero foi o numero: %d",resuldado); 	
 }
 






