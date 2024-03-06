#include<stdio.h>

main(){
	
	float salario_min, salario_pesso, qnt_sal_min;
	
	printf("informe o salario minimo  :");
	scanf("%f", &salario_min);
	
	printf("informe seu salario  :");
	scanf("%f", &salario_pesso);
	
	qnt_sal_min=(salario_pesso/salario_min);
	
	printf ("a pessoa que recebe um salario de R$ %2.f recebe %.1f salarios minimos\n",salario_pesso,qnt_sal_min);
	
}
