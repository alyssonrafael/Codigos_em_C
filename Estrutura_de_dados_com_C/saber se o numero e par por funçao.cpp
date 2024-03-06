#include<stdio.h>
//fuçao para verificar se o resultado do resto da divisao do numero recebido e 0 se for 0 o numero e par
int epar(int a){
	if(a%2==0){printf("\nseu numero e par\n");
	}else {printf("\nseu numero e inpar\n");}
}

int main(){
	
	int result;
	int numero;
	
	printf("digite um numero para saber se e par ou nao: ");
	scanf("%d",&numero);
    result=epar(numero);// utilizando a funçao
    
    printf("\no numero digitado foi %d",numero);
	
}
