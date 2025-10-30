#include <stdio.h>
#include <stdlib.h>

int main (){


    // Vamos aprender a ober o tamanho dos tipos primitivos que temos na lingaugem C
    
    // INTEIROS

    printf ("Tamanho em memória de 1 int --> %d BYTES \n", sizeof(int));
    printf ("Sabemos que um BYTE tem 8 BIT, logo: \n");
    printf (" --> 1 inteiro em BITS é = ao tamanho de 4 BYTES * 8\n");

    int bit_int = sizeof(int) * 8;

    printf ("Em outras palavras, o tamanho de um inteiro em BITs é: %d\n\n", bit_int);



    // FLOAT

    printf ("Tamanho em memória de 1 float  é --> %d BYTES \n", sizeof(float));
    printf ("Sabemos que um BYTE tem 8 BIT, logo: \n");
    printf (" --> 1 float em BITS é = ao tamanho de 4 BYTES * 8\n");

    int bit_float = sizeof(float) * 8;

    printf ("Em outras palavras, o tamanho de um float em BITs é: %d\n\n", bit_float);


    // CARACTERE
    
    printf ("Tamanho em memória de 1 caracter é --> %d BYTES \n", sizeof(char));
    printf ("Sabemos que um BYTE tem 8 BIT, logo: \n");
    printf (" --> 1 float em BITS é = ao tamanho de 4 BYTES * 8\n");

    int bit_char = sizeof(char) * 8;

    printf ("Em outras palavras, o tamanho de um float em BITs é: %d\n\n", bit_char);

    return 0;
}