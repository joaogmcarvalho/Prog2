#include<stdio.h>

void troca(int *pa, int *pb);//declarando função para troca de valor de variavel, com ponteiro

int main(){
	
	int a=10, b=20;
	troca(&a,&b);//chamando a função
	printf("a=%d b=%d\n", a,b);
	
	return 0;
}

void troca(int *pa, int *pb){

	/*funçao com ponteiro que troca os valores*/
	
	int tmp=*pb;//tmp receber o valor apoontado pelo ponteiro b 
	*pb=*pa;//ponteiro b recebe o valor apontado de ponteiro a 
	*pa=tmp;//ponteiro a receber o valor armazenada em tmp
}
