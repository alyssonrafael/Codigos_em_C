#include<stdio.h>
#include<string.h>
/*escrev um programa que declare um inteiro, um float, e um char,e ponteiros para inteiro,floate char.associe as variaveis aos ponteiros
(use &). modifique os valores de cada variavel usando os ponteiros. imprima os valores das variaveis antes e depois.*/
/*int main(){
	int a = 5;                                 // o * conteudo da variavel que o ponteiro guarda o endereço.
	float b = 1.2;
	char c = a;

	int *ptr_a = NULL;
	float *ptr_b = NULL;
	char *ptr_c = NULL;
	ptr_a = &a;
	ptr_b = &b;
	ptr_c = &c;
	
	printf("%d\n",*ptr_a);
    printf("%f\n",*ptr_b);
    printf("%c\n",*ptr_c);	
}*/

int strlen(char *s, int *ptr){
char *prt = s; 
while(*s != '\0'){
 s++;
}
return (int) (*ptr-*s);
}

int main(){
char nome[10];
strcpy(nome, "quantas_caracteres");
printf("%d\n", strlen(nome));

}

