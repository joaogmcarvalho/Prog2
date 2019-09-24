#include<stdio.h>
#include<string.h>
#define TAM 4
int main(){
	char nome[TAM], *p = nome;
	int i;
	
	printf("Insira o seu nome:" );
	scanf("%s", &nome);
	
	for(i=0;i<TAM;i++){
		printf("%c", p[i]);		
	}

	return 0;
		
}
