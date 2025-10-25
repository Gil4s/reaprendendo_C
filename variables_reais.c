#include <stdio.h>
#include <stdlib.h>

int main () {

    float number;

    number = 3,1415;
    
    // Meu valor em float sempre vai ser demonstrado com 6 casas decimais por padrão

    printf ("O valor da minha variável real %f\n", number); // notação de origem  

    printf ("O valor da minha variável real %.2f\n", number); // notação com 2 casas decimais

    printf ("O valor da minha variável real %.3f\n", number); // notação com 3 casas decimais

    float old_number = number;
    printf ("Digite um novo valor real: ");
    scanf ("%f", &number); // armazenando o valor digitado pelo usuário na variável number

    printf ("\nO valor que vocë digitou foi: %f\n\nNosso antigo valor era: %f\n", number, old_number);

    return 0;
}