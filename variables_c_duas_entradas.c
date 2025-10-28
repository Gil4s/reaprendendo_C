#include<stdio.h>
#include<stdlib.h>

int main (){

    char char_1, char_2;

    printf("Digite dois valores para armazenarmos em uma única função: ");
    scanf ("%c %c", &char_1, &char_2); // Espaçando para evitar o problema do buffer
    // Perceba que se vc tentar rodar esse código sem espaçar entre as solicitações de armazenamento das variáveis, ele vai armazenar o segundo caracter como sendo o que foi lido do enter

    printf ("Caracteres digitados: %c\n%c", char_1, char_2);



    return 0;


}

