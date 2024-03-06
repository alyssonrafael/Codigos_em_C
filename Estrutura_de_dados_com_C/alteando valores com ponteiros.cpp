#include<stdio.h>
#include<string.h>

int main(){
	
	int i = 1;
	int*ponteiroint = &i;
	
	float f = 0.6;
	float *ponteirofloat = &f;
	
	char c = 'a';
	char *ponteirochar = &c;
	
	
	*ponteiroint = 2;
	*ponteirofloat = 1.2;
	*ponteirochar = 'c';
	
	
	printf("inteiro %d\n",*ponteiroint);
	printf("float %f\n", *ponteirofloat);
	printf("char %c\n",*ponteirochar);
	
	
	
	
	
}
