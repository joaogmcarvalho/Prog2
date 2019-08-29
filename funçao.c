#include<stdio.h>

const int TAM=5; //defiene o tamanho de TAM

int mat[TAM][TAM]; //para declarar uma variavel global, ela tem que ser declarada fora de qualquer funçao e antes da funçao main

int esime(); // chamando outra funçao

void matriz(); //declara uma funçao, que vai ser chamada na funçao main, e esta localizada abaixo dela

int main(){
	
	matriz();
	
}

void matriz(){
	int i,j;
	
	for(i=0;i<TAM;i++){
		for(j=0;j<TAM;j++){
			printf("Preencha a matriz[%d][%d]", i,j);
			scanf("%d", &mat[i][j]);
		}
	}
}
