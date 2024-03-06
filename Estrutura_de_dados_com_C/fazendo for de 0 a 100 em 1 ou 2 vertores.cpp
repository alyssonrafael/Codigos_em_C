#include<stdio.h>

int main(){
	
 int mtx[10][10];	
 int *ptr_mtx;
 ptr_mtx = mtx[0];
 for(int i = 0; i < 100  ;i++){
 	ptr_mtx[i]=0;
 }
 for(int i=0;i<100;i++){
 	ptr_mtx[i]= i+1;
 
 }
for(int i=0;i<10;i++){
for(int j=0;j<10;j++){
printf("%d,",mtx[i][j]);
printf("\n");
//printf("%d %d",i,j);// segunda opção
}}
}





