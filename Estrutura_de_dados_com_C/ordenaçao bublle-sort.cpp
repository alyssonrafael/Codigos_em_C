#include <stdio.h>
// com a função bublle


//função que vai realizar a troca dos valores. e sera util quando for querer trocar o valor de lugar na inplementação do bubble sort uma vez que a troca de valor tem que ser feita dessa forma em c  a passagem de valor por referencia os ponteiros que dao esse poder
void troca(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// FAZENDO O bublle sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++) // aqui ele esta percorendo todo o vetor e organizando os ultimos elementos 
        // Os últimos elementos 'i' já estão no lugar
        for (j = 0; j < n - i - 1; j++) // aqui ele faz a verificação de cada elemento nesse bloca da linha 19 a 21 e faz a troca com a funcao 'troca'
            if (arr[j] > arr[j + 1])
                troca(&arr[j], &arr[j + 1]); // aqui e onde ele faz atroca de lugar do elemento que esta a sua direira (se) ele for menor o if na linha de cima 
}


// FUNÇÃO QUE VAI PRINTAR O ARRAY  (a lista) se inserida antes da função bublle vai printar os valores normalmente
void printArray(int arr[],int tamanho){
	
	int i; 
	for(i = 0; i < 5; i++) 
    	printf("%d ", arr[i]);	
}

// função principal que vai chamar as outras. 
int main(){
    int arr[] = {100, 5, 66, 22, 11}; // definiçao do meu arr nao organizado
    int n = sizeof(arr)/sizeof(arr[0]); // sabendo o tamanho do vetor array ultilizando o arr[o] para que seja o primeiro elemento desse vetor
    printf("lista desordenada 'original':\n");//print de organizar a saída
    printArray(arr,n);//printando o array desordenado
	bubbleSort(arr, n); // aplicando a função que vai ordenar os elementos da minha lista do meu arr
    printf("\nlista ordenada apos o uso do bubble sort: \n");// um print basico com um pular linha so pra saida ficar arrumadinha 
    printArray(arr, n);//usando a função de print para printar todos os valores do arrey e como foi depois do bubble sort ja esta organizado
    return 0; // fim do programa
}


