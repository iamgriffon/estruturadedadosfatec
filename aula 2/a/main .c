/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void soma10(int x){ 
    x = x + 10;
    printf("Soma10=%i \n" , x);
    return;
}

void soma10p(int *x){ 
    *x = *x + 10;
    printf("Soma10p=%i \n" , *x);
    return;
}


int main(int argc, char *argv[]){
    
    int numero = 34;
    printf("Numero = %i, end=%i \n \n", numero, &numero);
    soma10(numero);
    printf("Numero = %i \n \n", numero);
    
    soma10p(&numero);
    printf("Numero = %i \n \n", numero);
    
     /* Relacionando vetor a ponteiro  */
    int v[] = {3,2,1,3,10,8,5};
    int *d;
    d = v;
    printf("Pos=%x, Valor=%i \n \n", d, *d);
    printf("Pos=%x, Valor=%i \n \n", (d+1), *(d+1));
    printf("Pos=%x, Valor=%i \n \n", (d+2), *(d+3));
    
    /* Ponteiro de vetor */
    int x;
    int *p[4];
    int vA[]={2,3,5,9,11};
    int vB[]={1,2,5,6};
    int vC[]={0,11,69,24,42,73};
    int vD[]={6,6,689,5,4527};
    
    p[0] = vA;
    p[1] = vB;
    p[2] = vC;
    p[3] = vD;
    
    for(x=0; x<4; x++){
        printf("End=%x, Valor=%i \n", p[x], *p[x]);
    }
}
    
    



