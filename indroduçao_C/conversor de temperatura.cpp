#include<stdio.h>
#include <locale.h>


//cauculadora de gruas celcius em frenhait e kelvin


main(){
	  setlocale(LC_ALL, "Portuguese");
    
	int medida;
	float grausc;
	 
	printf("digite aqui a temperatura que voce gostaria de trasforma se quiser em kelvin digite 1 se quiser em fahrenheit 2 ou 3 para rankine:");
	scanf("%d", &medida);
	printf("agora digite o valor que gostaria de converter:");
	scanf("%f", &grausc);
	
	 float k = grausc + 273.15;
     float f = grausc + 32.1;
	 float r = grausc + 491.67;
	 
	 if (medida>3){
		printf("o valor digitado é invalido!\n");
	}
	if(medida==1){
		printf("a sua temperatura agora é:%.2f", k);
	    }else if(medida==2){
		printf("a sua temperatura agora é:%.2f",f);
		}else if (medida==3){
			printf("a sua temperatura agora é:%.2f",r);
		}else{
			printf("porfavor tente novamente digite 1, 2 ou 3.");
	}
}
	
	
	
	
	
	
	

