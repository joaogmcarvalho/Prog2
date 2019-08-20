#include<stdio.h>

int main(){
	
	float av1,av2,av3,media;
	int i,aulas,faltas,porct_faltas;
	
	for(i=0;i<1;i++){
		printf("\nEntre com o numero de aulas: ");
		scanf("%d", &aulas);
		printf("\nEntre com o numero de faltas do aluno: ");
		scanf("%d", &faltas);
		printf("\nInsira a nota da av1 do aluno: ");
		scanf("%f", &av1);
		printf("\nInsira a nota da av2 do aluno: ");
		scanf("%f", &av2);
		printf("\nInsira a nota da av3 do aluno: ");
		scanf("%f", &av3);
	}
	
	porct_faltas=(faltas/aulas)*100;
	
	if((av1<av2)&&(av1<av3)){
		av1=av3;
		media=(av1+av2)/2;
	}
	else if((av2<av1)&&(av2<av3)){
		av2=av3;
		media=(av1+av2)/2;
	}
	else{
		media=media;
	}
	
	if(media<6){
		printf("Voce esta reprovadopor media! A sua media foi: %.2f", media);
	}
	else if(porct_faltas<75){
		printf("Voce esta reprovado por falta!");
	}
	else{
		printf("Voce esta aprovado! A sua media foi %.2f", media);
	}
	
	return 0;
}
