
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float media(int qtd, float *pNotas){
    float total;
    int x;
    for (x=0; x<qtd; x++){
        total += pNotas[x];
    }
    total = total / qtd;
    return total;
}

int main(int argc, char *argv[]) {
    float notas[10] = {5,7,8,9,7,8,9,4,10};
    float mediaNotas = media(10, notas);
    printf("media = %f", mediaNotas);
    return 0;
}
