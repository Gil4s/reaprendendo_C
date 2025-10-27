#include <stdio.h>
#include <stdlib.h>

int main (){

    char letra;

    printf ("Digite um caracter: ");

    //fgetc = file getc

    //fun específica para utilização com arquivos e também o teclado

    letra = fgetc (stdin); // aqui, eu digo que estou lendro da entrada padrão do computador, que vai ser o teclado

    printf ("Caracter lid: %c", letra);

    return 0;


}