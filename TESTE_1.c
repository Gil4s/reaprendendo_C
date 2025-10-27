#include<stdio.h>
#include<stdlib.h>
 

int main (){

    // PRECISAMOS DE UM PROGRAMA PARA FAZER A LEITURA DE SEXO, IDADE, PESO E ALTURA

    char sexo;
    int idade;
    float peso, altura;

    printf ("Vamos fazer uma coleta de dados para analisar o padrão de moradores da cidade \n");

    printf ("Inicialnente, me informe o seu sexo (M, m, F, f) , idade, peso e altura:\n");

    scanf ("%c%d%f%f", &sexo,&idade,&peso,&altura);

    printf ("Certo, os dados digitados foram: Sexo: %c, Idade: %d, Peso: %.1f, Algura: %.2f", sexo, idade, peso, altura);

    return 0; 

}