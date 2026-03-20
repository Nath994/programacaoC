#include <stdio.h>

int main (){

// Exemplo 1 - comparação de números

    int numero1, numero2;
    
    numero1 = 10;
    numero2 = 5;

    if (numero1 > numero2) {
        printf("Número 1 é maior que número 2\n");
    }

// Nesse caso ele não vai aparecer nada se a condição não for atendida.

/* Exemplo 2 - Se a idade for 18 ou mais, o programa imprime "você é maior de idade. No nosso exemplo 20 é maior que 18 
então a mensagem será exibida" */

    int idade = 20;

    if (idade >= 18){
    
        printf("Você é maior de idade\n");
    }

// Exemplo 3  - Se a temperatura for maior que 30 está calor

    float temperatura = 32.0;

    if (temperatura > 30.0){
        printf("Está calor\n");
    }

// Exemplo 4 - Se a nota for maior ou igual a 60 é suficiente para passar de ano

    int nota = 65;

    if (nota >= 60){
        printf("Parabéns, você passou!\n");
    }

// Exemplo 5 - Comparar idades

    int idade1 = 25, idade2 = 30 ;

    if (idade1 != idade2){
        printf("As pessoas tem idades diferentes\n");
    }

// Exemplo 6 - Verificar se o número é par
// usaremos o operador '%'. Ele retorna o resto de uma divisão

int numero3 = 4; 
int resultado = numero3 % 2;

printf("A variável resultado é igual a %d\n", resultado);

if (resultado == 0){
    printf("O número é par\n");
    }
}
