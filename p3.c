#include<stdio.h>

int main(){
	
	int a=1,b=2,c=3;
	
	int *p=&b;
	
	printf("\nEndereço de a=%d, b=%d e c=%d", &a,&b,&c);
	
	printf("\nValor de p=%d=%d", p, *p);
	p=p+1;
	printf("\nValor de p=%d=%d", p, *p);
	
	//como imprimir o valor da variavel c, sem usar a variavel
	
	p=p-2;
	printf("\nValor de p(p-2) = %d = %d", p,*p);
	
	return 0;
}
