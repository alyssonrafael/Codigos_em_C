#include<stdio.h>
#include<locale.h>               //selecionar biblioteca de linguas 
main (){   
    setlocale(LC_ALL, "portuguese");              //set local da lingua           //else contrario de if
	int idade;
	printf ("digite sua idade:");
	scanf("%d" , &idade);
	if(idade >= 18){
		printf("você é maior de idade");
	} else{
		printf("voce é menor de idade");
	}
	
}

