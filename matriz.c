#include<stdio.h>
#include<string.h>

int main(){
	
	int i,j, jogo[3][3];
	
	for(i=0;i<3;i++){
		for (j=0;j<3;j++){
			printf("\nDigite um valor para[%d %d]: ", i+1,j+1);
			scanf("%d", &jogo[i][j]);
		}
	}
	
	printf("\n");
	
	for(i=0;i<3;i++){
		for (j=0;j<3;j++){
			printf("%d", jogo[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
