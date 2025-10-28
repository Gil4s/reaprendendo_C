#include<stdio.h>
#include<stdlib.h>
 

int main (){

    // PRECISAMOS DE UM PROGRAMA PARA FAZER A LEITURA DE SEXO, IDADE, PESO E ALTURA

    char sexo;
    int idade;
    float peso, altura;

    printf ("Vamos fazer uma coleta de dados para analisar o padrão de moradores da cidade \n");

    printf ("Inicialnente, me informe sua idade, peso e altura e sexo (M, m, F, f):\n");

    scanf ("%d%f%f %c",&idade,&peso,&altura,&sexo);

    // Alterações feitas --> Eu somente espacei no meu armazenamento antes do meu caracter que queria ler

    // IMPLICAÇÕES --> Isso me resulta em um armazenamento do ENTER, TAB e ESPAÇO 

    // Logo, é como se eu tivesse armazenndo 5 valores, onde o meu novo valor, NESSE CASO vai ser o meu ENTER

    // RESULTADO --> Como eu estou armazenando o meu ENTER (\n), agora eu consigo ler o meu caracter que o usuário digitar, pq eu já tirei o ENTER(\n) do meu buffer
    

    printf ("Certo, os dados digitados foram: Sexo: %c, Idade: %d, Peso: %.1f, Altura: %.2f", sexo, idade, peso, altura);

    return 0; 

    


}