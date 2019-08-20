#include<stdio.h>
#include<string.h>

int main(){
	
	int i, tam;
	char nome[500];
	char remov;
	
	printf("Digite uma string: ");
	gets(nome);
	
	printf("\nDigite o caractere: ");
	scanf("%c", &remov);
	
	tam=strlen(nome);
	
	for(i=0;i<tam;i++){
		if(nome[i]==remov){
			nome[i] =' ';
		}
	}
	
	printf("\nSua string eh: %s", nome);
	
	return 0;
}
