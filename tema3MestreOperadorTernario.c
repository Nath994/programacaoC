#include <stdio.h>

int main () {
    
    printf("Exemplo 1: idade\n");

    int idade = 20;
    int resultadoIdade; 

    
    //Operador Ternário
    //condicao ? verdadeiro : falso;

   idade >= 18 ? printf("Você é maior de idade\n") : printf("Você é menor de idade\n");

// Como seria se fosse da outra forma:
   resultadoIdade = idade >= 18 ? 1 : 0;

   if (resultadoIdade = 1){
        printf("Você é maior de idade\n");

    }else{
    printf("Você é menor de idade\n");
    }

    printf("\nExemplo 2: Temperatura\n");

    int temperatura = 31;
    int resultadoTemperatura;

    temperatura > 30 ? printf("Está calor\n") : printf("Está frio\n");
    
// Como seria se fosse da outra forma
    resultadoTemperatura = temperatura > 30 ? 1 : 0;

    if (resultadoTemperatura == 1){
        printf("Está calor\n");
    }else{
        printf("Está frio\n");
    }

    printf("\nExemplo 3: Comparação numérica\n");

    int num1 = 40, num2 = 20;

    int maior;

    num1 > num2 ? (maior = num1) : (maior = num2);

    printf("%d\n", maior);


}