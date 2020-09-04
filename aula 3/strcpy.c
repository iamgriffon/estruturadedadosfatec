#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main(int argc, char *argv[]) {
    char nome[61];
    char *nome2 = "Jean Joao da Silva";
    
    printf("Digite seu nome: ");
    gets(nome);
    
    printf("Seu nome eh = %s \n", nome);
    printf("Seu nome eh = %s \n", nome2);
    printf("Seu nome eh = %x \n", &nome2);
    
    strcpy(nome, "Mariana Chiquinha");
    printf("Seu nome eh = %s \n", nome);
    printf("Seu nome eh = %x \n", &nome);
  
}

// OUTPUT:

// Digite seu nome: OIN <--- DADO INPUTADO                                                                                                                                                     
// Seu nome eh = OIN                                                                                                                                                         
// Seu nome eh = Jean Joao da Silva                                                                                                                                           
// Seu nome eh = cb67aa68                                                                                                                                                    
// Seu nome eh = Mariana Chiquinha                                                                                                                                           
// Seu nome eh = cb67aa70