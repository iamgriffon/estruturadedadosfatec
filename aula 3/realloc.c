#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
 int *p;
 p = malloc(10*sizeof(int));
 p[0] = 5;
 p[1] = 7;
 printf("O endereco 1 = %x \n", &p);
 p = realloc(p, 20*sizeof(int));
 printf("O endereco 2 = %x \n", &p);
 p[18] = 32767;
 printf("[0]=%d [1]=%d", p[0], p[1]);
 
 free(p);
 
return 0;
};

