#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x, y, *p;
	y = 0; //y=0
	p = &y;
	x = *p; //x=0
	x = 4; //x=4
	(*p)++; //y=1
	--x; //x=3
	(*p) += x; //y=1 x=3 
	printf("x=%i y=%i \n", x, y);
	return 0;
}
