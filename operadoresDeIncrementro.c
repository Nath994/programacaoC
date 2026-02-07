#include <stdio.h>

int main() {

    /*
    Incremento (++)
    Pré-Incremento ++a
    Pós-Incremento a++
    Decremento (--)
    Pré-Decrementro --a
    Pós-Decrementro a--
    */

    int numero1 = 1, resultado = 0;

    //incremento (++)
    printf("Antes do incremento o número é %d\n", numero1);

    numero1++;
    printf("Depois do incremento o número é %d\n", numero1);
    
    printf("\n");

    //Pré-Incremento ++a
    //incremente primeiro depois use
    printf("Antes do Pré-incremento o numero é %d e o resultado é %d\n", numero1, resultado);

    resultado = ++numero1;
    printf("Após o Pré-incremento o número é %d e o resultado é %d\n", numero1, resultado);
    
    printf("\n");

    //Pós-Incremento a++
    //Use o valor atual e depois incremente
    printf("Antes do Pós-incremento o numero é %d e o resultado é %d\n", numero1, resultado);

    resultado = numero1++;
    printf("Após o Pós-incremento o número é %d e o resultado é %d\n", numero1, resultado);

    printf("\n");

   //Redefinindo os valores
    numero1 = 1;
    resultado = 0;

    //Decremento (--)
    printf("Antes do decremento o número é %d\n", numero1);

    numero1--;
    printf("Depois do decremento o número é %d\n", numero1);

     printf("\n");

    //Pré-decremento --a
    printf("Antes do Pré-decremento o numero é %d e o resultado é %d\n", numero1, resultado);

    resultado = ++numero1;
    printf("Após o Pré-decremento o número é %d e o resultado é %d\n", numero1, resultado);
    
    printf("\n");

    //Pós-decremento a--
    printf("Antes do Pós-decremento o numero é %d e o resultado é %d\n", numero1, resultado);

    resultado = numero1++;
    printf("Após o Pós-decremento o número é %d e o resultado é %d\n", numero1, resultado);

}