#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("=== EXPLORANDO O BUFFER DE ENTRADA EM C ===\n\n");

    printf("Digite qual a sua identificacao de genero: ");

    // Declaramos uma variável do tipo char (caractere individual)
    char genero = 'k';

    // Mostramos o valor inicial
    printf("Genero inicial da maquina: %c\n", genero);
    printf("Agora, digite um novo genero:\n");

    /*
        ⚙️ COMO FUNCIONA O BUFFER DE ENTRADA (stdin):

        Quando o usuário digita algo no teclado e aperta ENTER,
        o sistema operacional armazena essa sequência de caracteres
        em uma estrutura de dados chamada "buffer de entrada".

        Essa estrutura NÃO é uma pilha (LIFO), e sim uma FILA (FIFO):
        First In, First Out — o primeiro caractere que entra é o primeiro que sai.

        Exemplo: o usuário digita M + ENTER
        O buffer de entrada conterá:

        FILA DO BUFFER DE ENTRADA
        ---------------------------
        Frente → [M] [\n] ← Fim

        Onde:
        - 'M' é o caractere digitado
        - '\n' é o ENTER (quebra de linha)
    */

    // O espaço antes do %c faz o scanf ignorar qualquer caractere
    // "em branco" (como espaços, tabulações e ENTERs '\n') que
    // estejam no buffer, lendo apenas o próximo caractere válido.
    scanf(" %c", &genero);

    printf("\nO genero informado foi: %c\n\n", genero);

    /*
        Agora vamos entender o comportamento do getchar().
        Ele lê APENAS um caractere da frente da fila do buffer de entrada.

        Então, se ainda houver algo no buffer (como um ENTER residual),
        o getchar() vai capturar isso — ele não "espera" o usuário digitar nada novo
        se o buffer ainda estiver com dados pendentes.
    */

    char old_Letter = 'n';  // letra antiga
    char new_Letter;        // letra nova que o usuário digitará

    printf("Digite uma nova letra para ser armazenada: ");

    // getchar() lê apenas o primeiro caractere disponível no buffer.
    // Se o buffer estiver vazio, ele esperará o usuário digitar algo e apertar ENTER.
    new_Letter = getchar();

    printf("\nA antiga letra armazenada foi: %c", old_Letter);
    printf("\nA nova letra digitada foi: %c\n\n", new_Letter);


    return 0;
}
