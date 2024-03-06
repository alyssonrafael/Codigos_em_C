// CADA CODIGO(METODO DE ORDENAÇÃO) ESTÁ COMENTADO INDIVIDUALMENTE PARA RODAR É SÓ TIRAR UM ESPCIFICO DO COMENTARIO

// bubble--------------------------------------------------------------


#include <stdio.h>
int main(){
	printf("metodo bubble--------------\n");
    int data[100],tamanho,temp;
    printf("Digite o numero de elementos que deseja ordenar: ");
    scanf("%d",&tamanho); // pegando o numero do teclado para o tamnho do array
    
	int i; // var de controle para o for
	for(i=0;i<tamanho;++i)
    {
        printf("%d. Insira o elemento aqui:",i+1);
        scanf("%d",&data[i]);
    } // vai receber os valores para o array em sequencia
    
    int caixinha;// var de controle para esse for chamada caixinha por conta das caixinhas do array que estao mudando de canto aqui
	for(caixinha=0;caixinha<tamanho-1;++caixinha)
    for(i=0;i<tamanho-caixinha-1;++i)
    {
        if(data[i]>data[i+1])  //Se você deseja classificar em ordem decrescente, altere> para <apenas aqui.
        {                      // pois e aqui que vai acontecer a magica se o valor para direita for maior ele vai trocar
            temp=data[i];
            data[i]=data[i+1];
            data[i+1]=temp;
        }
    }
    printf("Em ordem crescente:"); // e mude o nome pra decrecente 
    for(i=0;i<tamanho;++i) // for para inprimir todos os elementos do vetor
         printf("%d  ",data[i]);
    return 0;// fim do programa
}

//selection sort ----------------------------------------------------------

/*
#include<stdio.h>
#include<string.h>
#include<limits.h>
#include<stdlib.h>
// função para trocar a posição de dois elementos
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}


void selectionSort(int array[], int size) {
  for (int step = 0; step < size - 1; step++) {
    int min_idx = step;
    for (int i = step + 1; i < size; i++) {

      // Seleciona o elemento mínimo em cada loop.
      if (array[i] < array[min_idx])
        min_idx = i;
    }

// coloca min na posição correta
    swap(&array[min_idx], &array[step]);
  }
}
//função para imprimir um array
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}
int main() {
  printf("metodo selection-------------\n");
  int data[] = {20, 12, 10, 15, 2, 9, 5, 0, 1};
  int size = sizeof(data) / sizeof(data[0]);
  selectionSort(data, size);
  printf("Lista classificada em ordem crescente:\n");
  printArray(data, size);
}
*/

// INSERT -----------------------------------------

/* # include<stdio.h>
void insert(int a[],int n) //funcao para ordenar um array com ordenação por insercao
{
	int i, j, temp;
	for (i = 1; i< n; i++){
		temp = a[i];
		j = i - 1;
		
		while(j>=0 && temp <= a[j])
		{
			a[j+1] = a[j];
			j = j-1;
		}
		a[j+1]= temp;
	}
}

void printArr(int a[],int n) //funçao pra printar o array
{
	int i;
	for(i=0; i < n; i++)
	printf("%d  ",a[i]);
}

int main(){

	printf("metodo insert --------- \n");
	int a [] = {12,31,25,8,32,17,2,3,79};
	int n = sizeof(a) / sizeof(a[0]);
	printf("antes de ordenar os elementos do array sao \n");
	printArr(a,n);
	insert(a,n);
	printf("\ndepois de ordenar os elementos do array sao - \n ");
	printArr(a,n);
	
	return 0;	
}
*/


