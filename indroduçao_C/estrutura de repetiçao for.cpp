#include<stdio.h>
//indroduçao ao "for" ultilizado quando necessitar de um contador um contador.
/*
int main(){
	
for(int i = 0; i < 10; i++)	{          // o "for" vai ter uma condiçao; declaraçao de variavel; e a alteraçao da variavel i++ = ele mesmo mais 1
	printf("%d", i);	
}
	
}*/

// EXEMPLO --


int main() {
	
int poderDeAtaque = 15;
int defesa = 10;
int hp = 100;


/*for(int i=0; i<20; i++){
	int dano = poderDeAtaque - defesa;
hp -= dano;
printf("fulano sofreu um ataque e esta com %d de HP.\n", hp);
}	
	printf("fulano is dead");
	
}esse for nao seria funcional pois a gente deveria saber o poder de ataque e o poder do ataque pode nao ser o que a gente quer */

while(hp>0){
	
		int dano = poderDeAtaque - defesa;
hp -= dano;
printf("sofreu um ataque e esta com %d de HP.\n", hp);
	
} printf ("is dead");




}
