#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a = 10;
	int b = 20;
	int *pA;
	int *pB;
	pA = &a;
	pB = &b;
	printf("End a=%x, valor a=%i \n", pA, *pA);
	printf("End b=%x, valor b=%i \n", pB, *pB);
	
	*pA = *pB;
	printf("End a=%x, valor a=%i \n", pA, *pA);
	printf("End b=%x, valor b=%i \n", pB, *pB);
	
	*pA=*pA+1;
	printf("End a=%x, valor a=%i \n", pA, *pA);
	printf("End b=%x, valor b=%i \n", pB, *pB);
	if(pA!=pB){
		printf("Ponteiros sao diferentes\n");		
	}
	
	pA=pB;
	a = 50;
	printf("End a=%x, valor a=%i \n", &a, a);
	printf("End pA=%x, valor pA=%i \n", pA, *pA);
	printf("End b=%x, valor b=%i \n", pB, *pB);
	if(pA==pB){
		printf("Ponteiros apontam para o mesmo endereço\n");		
	}
	
	
	return 0;
}
