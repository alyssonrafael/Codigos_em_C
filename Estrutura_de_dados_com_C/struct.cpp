/* #include<stdio.h>
   #include<string.h>  */
// atividade 2
/*1. crie um programa que possua 2structs: tipo_endereço e ficha_pessoal.
A primeira deve conter atributos de endereço (rua,numero,bairro,cidade,sigla do estado e cep.
A segunda deve conter atributos pessoais de um usuario (nome,email,telefone e endereço.*/

#include<stdio.h>
#include<string.h>
 struct endereco{ //tipo endereço
	char rua [50];
	int numero;
	char bairro [50];
	char cidade [20];
	char sigla [2];
} endereco;

struct pessoa{ 
    char nome[7];
    char e_mail[100];
    long int telefone;
    
  
} ficha;

/*2. apos a criaçao das structs, um registro de ficha pesoal deve ser feito*/

int main(){
	strcpy(ficha.e_mail,"alysson@gmail.com");
    ficha.telefone=99999;
    strcpy(ficha.nome,"rafael");
    printf("seu numero e :%d\n", ficha.telefone);
    printf("seu email e : %s\n ", ficha.e_mail);
    printf("nome:%s\n",ficha.nome);
    
    //os de cima e definindo os dados pessoais daqui pra baixo e o endereço
	strcpy(endereco.rua,"rua");
	strcpy(endereco.bairro,"bairro");
	strcpy(endereco.cidade,"cidade");
	strcpy(endereco.sigla,"xx");
	endereco.numero=00;
	
	printf("\n\nseu enderco e:\n\n");
	printf("%s\n",endereco.sigla);
	printf("%s\n",endereco.cidade);
	printf("%s\n",endereco.bairro);
    printf("%s\n",endereco.rua);
	printf("%d\n",endereco.numero);
   
  
}
