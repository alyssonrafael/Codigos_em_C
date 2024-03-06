#include<stdio.h>

int main() {
	
	float total;
	float temp;
	
	printf("digite um numero para ir somando:\npara finalizar o programa faca o reultado dar 0\n");

	while (temp >= 0){
	scanf("%f", &temp);
    if (temp >= 0){	
	total += temp;
	printf("o valor total eh: %.2f\n", total);
}else{
	printf("seu numero virou: %.2f\n", total-total);
}

}
printf ("fim do programa.");	
	
}
