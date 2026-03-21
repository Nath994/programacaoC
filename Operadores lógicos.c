#include <stdio.h>

// Operadores lógicos &&, ||, !

int main (){

    int a = 10, b = 5, c = 2 ;

    printf (" a = %d, b = %d, c = %d\n", a, b, c);

    // As duas variaveis precisam ser positivas

    if (a > 0 && b > 0){
        printf("Os dois números são positivos\n");
    }else{
        printf("Pelo menos um deles não é positivo\n");
    }

    // Pelo menos uma das variáveis precisa ser positiva

    if (a > 0 || b > 0){
        printf("Pelo menos um dos números é positivo\n");
    }else{
        printf("Os dois números são negativos\n");
    }

    // Verifique se a variável é zero

    if (!a) {
        printf( "A variável a é zero\n");
    }else{ 
        printf("A variável a não é zero\n");
    }
    
    if (!(a > 0)) {
        printf ("A variável a é negativa\n");
    }else{
        printf("A variável a é positiva\n");
    }

    //Precedência de operadores

    a = 5, b = -10, c = 1;
    
    printf (" a = %d, b = %d, c = %d\n", a, b, c);

    // b < 0 verdadeiro
    // a > 0 verdadeiro
    // c == 0 falso
    // verdadeiro && verdadeiro || falso
    // verdadeiro || falso
    // verdadeiro


    if (a > 0 && b < 0 || c == 0){
        printf ("A condição é verdadeira\n");
    }else{ 
        printf ("A condição é falsa\n");
    }
    
    // Verifique se uma pessoa tem entre 18 e 30 anos e altura superior a 170 centimetros
    
    int idade, altura;

    idade = 20;
    altura = 170;


    if (idade >= 18 && idade <= 30 && altura > 170){
        printf("a pessoa tem entre 18 e 30 anos e tem tamanho superior a 1.7 metros\n");
    }else{
        printf ("a pessoa não atende a um dos requisitos\n");
    }






}