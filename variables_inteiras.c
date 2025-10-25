#include <stdio.h>
#include <stdlib.h>

int main (){


    printf ("Vamos começar a criar algumas variáveis:\n");

    // Tipos de variáveis em C

    /*
    
    inteiro - int
    ponto flutuante - float
    ponto flutuante de dupla precisão - double
    caractere - char
    lógico - _Bool (C11)
    
    */

    int valor;

    valor = 50;

    int valor_antigo = valor; // estou copiando o valor da variável valor para a variável valor_antigo  

    printf ("O valor da variável inteiro é: %d\n", valor);
    // perceba que eu usei %d para imprimir o valor inteiro
    // cada tipo tem sua sintaxe de impressão
    

    printf ("Agora vamos trabalhar com valores que vc vai me entregar: ");

    scanf ("%d", &valor); // & é o operador de endereço, ou seja, estou armazenando naquele endereço o valor que o usuário digitou, logo, eu vou substituir o valor já tem armazenado na variável valor

    printf ("\nsO valor que você digitou foi: %d\n\nO valor antigo era:%d\n\n", valor,valor_antigo);

    return 0;
    
}