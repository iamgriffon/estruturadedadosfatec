#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x=1, *p, *p2;
	int vet[10];
	
	vet[9] = 5;
	p = &x; 
	p++;
	printf("Teste 1 %d \n", *p); 
	p = &x; 
	(*p)++;
	printf("Teste 2 %d \n", *p); 
	p = &x; 
	*(++p);
	printf("Teste 3 %d \n", *p); 
	
	p2 = vet; 	// p2 = vet[0]
	printf("Teste 4 %d \n", *(p2+9)); 
		
	return 0;
}
