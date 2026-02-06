#include <stdio.h>

int main(){

    /*
    Operadores Matemáticos

    Soma (+)
    Subtração (-)
    Multiplicação (*)
    Divisão (/)
    */

    int numero1, numero2, soma, subtracao, multiplicacao, divisao;

    printf("Entre com o número 1: \n");
    scanf("%d", &numero1);
    printf("Entre com o número 2:\n");
    scanf("%d", &numero2);


    //Operação soma
    soma = numero1 + numero2;

    //Operação subtração
    subtracao = numero1 - numero2;

    //Operação multiplicação
    multiplicacao = numero1 * numero2;

    //Operação divisão
    divisao = numero1 / numero2;

    printf("A soma de %d e %d é %d \n", numero1, numero2,soma);
    printf("A subtração de %d e %d é %d \n", numero1, numero2,subtracao);
    printf("A multiplicação de %d e %d é %d \n", numero1, numero2, multiplicacao);
    printf("A divisao de %d e %d é %d \n", numero1, numero2, divisao);

}