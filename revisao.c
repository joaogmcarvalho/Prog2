#include<stdio.h>

int main(){
	
	int vet[10],x,i; 
	
	for(i=0;i<10;i++){
		printf("Digite um valor: ");
		scanf("%d", &vet[i]);
	}
	
	printf("Digite o valor de x: ");
	scanf("%d", &x);
	
	for(i=0;i=10;i++){
		if(vet[i]%x==0){
			printf("%d", i);
			printf("%d", vet[i]);
		}
	}
	
	return 0;
}
