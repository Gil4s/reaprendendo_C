#include <stdio.h>
#include <stdlib.h>


int main () {

    // Vamos começar com a limpeza do buffer de entrada

    char a, b; 

    printf("Digite a primeira letra: ");
    scanf ("%c",&a);
    printf("Digite a segunda letra: ");
    scanf (" %c",&b);
    printf ("As letras digitadas foram: \n%c\n%c\n", a, b);

    printf ("Agora, Vamos para outra forma de fazer a limpeza do meu buffer de entrada\n");
    printf ("Para isso, vamos solicitar uma entrada a mais para limpar o buffer do teclado ao digitar enter\n");
    char terceira_letra, quarta_letra;
    printf ("Digite uma terceira letra: ");
    scanf (" %c", &terceira_letra);
    printf ("Agora, dps da solicitação, pode ver que no código eu estou limpando o excedente de outra forma diferente da primeira\n");
    getc(stdin);
    printf ("Digite uma quarta letra: ");
    scanf ("%c", &quarta_letra);


    printf("As letras digitadas foram: %c,%c", terceira_letra, quarta_letra);

    return 0;
}