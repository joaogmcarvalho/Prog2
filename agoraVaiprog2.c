#include<stdio.h>


int main(){
	
	float km, comb;
	char veic;
	
	printf("Ola! Bem vindo a Calculator Combustivel!!");
	
	printf("\nInsira o km percorrido pelo veiculo: ");
	scanf("%f", &km);
	
	printf("\nInsira o tipo de carro(A=carro/B=moto/C=onibus)");
	fflush(stdin);
	scanf("%c", &veic);
	
	if(veic=='A'||veic=='a'){
		comb=km/8;
		printf("O seu carro ira gastar %.2f litros de combustivel na viagem!", comb);
	}
	else if(veic=='B'||veic=='b'){
		comb=km/9;
		printf("O seu carro ira gastar %.2f litros de combustivel na viagem!", comb);
	}
	else if(veic=='C'||veic=='c'){
		comb=km/12;
		printf("O seu carro ira gastar %.2f litros de combustivel na viagem!", comb);
	}
	else{
		printf("Insira um tipo de veiculo valido!");
	}
	
	return 0;
}
