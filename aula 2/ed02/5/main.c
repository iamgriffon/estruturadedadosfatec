#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int vet[10], *p;
	p = vet;
	printf("pos. 0 %x \n", p);
	printf("pos. 3 %x \n", (p + 3));
	
	return 0;
}
