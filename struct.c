#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct alunos{
	int matricula;
	float nota1, nota2, nota3;
	char nome[150];
};
typedef struct alunos alunos;

int main(){
	alunos aluno1, aluno2;
	
	printf("Entre com a matricula do aluno: ");
	scanf("%d", &aluno1.matricula);
	printf("Entre com a nota da av1: ");
	scanf("%f", &aluno1.nota1);
	printf("Entre com a nota da av2: ");
	scanf("%f", &aluno1.nota2);
	printf("Entre com a nota da av3: ");
	scanf("%f", &aluno1.nota3);
	printf("Entre com o nome do aluno: ");
	scanf("%s", aluno1.nome);
 
	printf(" %s  \n %d \n %.2f \n %.2f \n %.2f \n",aluno1.nome,aluno1.matricula,aluno1.nota1,aluno1.nota2,aluno1.nota3);	
	return 0; 
}
