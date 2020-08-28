#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int valor = 10;
	int *ptr;
	
	ptr=&valor;
	
	printf("End. valor %x \n", &valor);
	printf("End. ponteiro %x \n", ptr);
	printf("Cont. valor  %i \n", valor);
	printf("Cont. *ptr %i \n ", *ptr);
		
	*ptr = 45;	
	
	printf("Cont. valor  %i \n", valor);
	printf("Cont. *ptr %i \n ", *ptr);
		
	return 0;
}
