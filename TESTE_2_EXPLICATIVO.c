#include<stdio.h>
#include<stdlib.h>
 

int main (){

    // PRECISAMOS DE UM PROGRAMA PARA FAZER A LEITURA DE SEXO, IDADE, PESO E ALTURA

    char sexo;
    int idade;
    float peso, altura;

    printf ("Vamos fazer uma coleta de dados para analisar o padrão de moradores da cidade \n");

    printf ("Inicialnente, me informe sua idade, peso e altura e sexo (M, m, F, f):\n");

    scanf ("%d%f%f%c",&idade,&peso,&altura,&sexo);

    // perceba, que ao executar o programa, a minha variável sexo vai não vai receber valor

    // O que acntece aqui é: O meu Buffer do teclado = 45\n56\n1.63\n
    // Passo a passo para o entendimento
    
    // 1 PASSO 45\n56.5\n1.63\n (meu buffer com os valores de idade, peso, altura e os respectivos "enters")

    // VALORES A SEREM ARMAZENADOS -> Meu scanf pede inicialmente um valor inteiro, logo

    // - 45 -  \n56.5\n1.63\n --> Armazena o 45 na minha solicitação
    
    // Meu scanf quer um valor float 

    // - \n56.5 -  \n1.63\n --> Vai até onde tiver o primeiro valor float e armazena

    // e o resto que vinha anmtes do meu float? APAGADO, pois ele vai limpar tudo que não for float, até os valores chegarem

    // Meu scanf quer um valor float novamente
    
    // - \n1.63 -  \n --> Vai fazer a mesma coisa, vou armazenar o float mais próximo e apagar todo o resto

    // Meu scanf quer um caracter 

    // - \n - Perceba que ele tem esse caracter...., pois o meu teclado é um caracter, assim como qualquer outra tecla vai ser esse caracter
    
    // Em c, vamos interpretrar tudo que vem sendo digitado pelo caracter

    

    printf ("Certo, os dados digitados foram: Sexo: %c, Idade: %d, Peso: %.1f, Altura: %.2f", sexo, idade, peso, altura);

    return 0; 

}