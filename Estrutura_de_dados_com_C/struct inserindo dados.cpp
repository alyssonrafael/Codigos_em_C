#include<stdio.h>
#include<string.h>

 struct endereco{ //tipo endereço
	char rua [50];
	char numero[6];
	char bairro [50];
	char cidade [20];
	char sigla [2];
} endereco;

struct pessoa{ 
    char nome[7];
    char e_mail[100];
    int telefone;
    
  
} ficha;
  int main(){
  	
  	printf("digite sua cidade:");
  	scanf("%s",endereco.cidade);
  	printf("digite a sigla do seu estado:");
  	scanf("%s",endereco.sigla);
  	printf("digite seu bairro:");
  	scanf("%s",endereco.bairro);
  	printf("digite o numero da sua casa:");
  	scanf("%s",endereco.numero);
	printf("digite seu email:");
	scanf("%s",ficha.e_mail);
    printf("digite seu nome:");
    scanf("%s",ficha.nome);
    printf("digite seu telefone:");
    scanf("%d",ficha.telefone);
    printf("aperte qualquer tecla para finalizar");
    
      
   

}
