#include<stdio.h>

const int TAM=5; //defiene o tamanho de TAM

int mat[TAM][TAM]; //para declarar uma variavel global, ela tem que ser declarada fora de qualquer fun�ao e antes da fun�ao main

int esime(); // chamando outra fun�ao

void matriz(); //declara uma fun�ao, que vai ser chamada na fun�ao main, e esta localizada abaixo dela

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
