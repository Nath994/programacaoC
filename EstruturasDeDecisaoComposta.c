#include <stdio.h>

int main (){

    int numero1;
    int numero2;

    numero1 = 10;
    numero2 = 10;

    if (numero1 > numero2) {
        // Bloco de código a ser executado se a condição for verdadeira
        printf("O número 1 é maior que o número 2\n");
    }else {
        // Bloco de código a ser executado se a condição for falsa
        printf("O número 1 não é maior que o número 2\n");
    }

    //Testar se o número é par ou ímpar 

    if (numero1 % 2 == 0){
        printf ("numero1 é par\n");
    }else{
        printf ("numero1 é ímpar\n");
    }
    
    //Informar se esta calor ou frio 

    float temperatura = 29.0;

    if (temperatura >= 30.0){
        printf ("Está calor\n");
    }else{
        printf ("Está frio\n");
    }

    //Testar se o aluno passou ou nao 

    int nota = 59;

    if (nota > 60) {
        printf ("Parabéns, você passou!\n");
    }else{
        if (nota == 60){
            printf ("Parabéns você passou, mas foi na risca\n");
        }else{
        printf ("Você não passou. Precisa estudar mais!\n");
        }
    }

    

    return 0;
}