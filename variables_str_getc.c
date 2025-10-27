#include <stdio.h>
#include <stdlib.h>


int main () { 

    char letra; 

    printf ("Digite um caracter: ");

    letra = getc (stdin); // minha letra vai receber o retorno da função getc
    // stdin é a entrada padrão do meu computador

    // Minha variável vai receber somente dados convertidos em caracter, logo, qualquer coisa que eu digitar vai ser convertido em caracter, seja ela número ou não

    printf ("Caracter lido: %c\n", letra);


    return 0;
}