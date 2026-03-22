#include <stdio.h>

int main(){

    int variavel;

    printf("digite um valor\n");
    scanf(" %d", &variavel);

    switch (variavel) {
    case 1:
        printf("Código a ser executado se variavel == 1\n");
    break;
    case 2:
        printf("Código a ser executado se variavel == 2\n");
    break;
    default:
        printf("código a ser executado se a variavel não for 1 ou 2");
    }

    //Caso a variável seja um char
    //Precisa colocar em aspas simples

    char variavel2;

    printf("digite um valor\n");
    scanf(" %c", &variavel2);

    switch (variavel2) {
    case 'a':
        printf("Código a ser executado se variavel == a\n");
    break;
    case 'b':
        printf("Código a ser executado se variavel == b\n");
    break;
    default:
        printf("código a ser executado se a variavel não for a ou b");
    }
}