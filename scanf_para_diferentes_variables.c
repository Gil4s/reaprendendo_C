#include <stdio.h>
#include <stdlib.h>

int main () {


    int num1, num2, num3;

    printf ("Digite um valor para lermos: \n");

    scanf ("%d%d%d",&num1,&num2,&num3); // lembrar de endereçar onde o valor vai está sendo armazenado, por isso o & comercial
    // Estou pedindo 3 valores inteiros para serem lidos pelo meu scanf 

    // Estou armazenando vários valores em uma chama só

    printf ("Valores lidos pelo programa: %d, %d, %d", num1, num2, num3);

    return 0;
}