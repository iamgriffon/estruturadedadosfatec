#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x=1, *p;
	p = &x; 
	p++;
	printf("Teste 1 %d \n", *p); 
	p = &x; 
	(*p)++;
	printf("Teste 2 %d \n", *p); 
	p = &x; 
	*(++p);
	printf("Teste 3 %d \n", *p); 
		
	return 0;
}
