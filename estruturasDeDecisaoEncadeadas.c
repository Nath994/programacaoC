#include <stdio.h>

int main(){

    /* Estrutura encadeada - Condições verificadas sequencialmente até que uma seja verdadeira
    if (condicao1){
        código a ser executado se condicao1 for verdadeira
    }else if (condicao2){
        código a ser executado se condicao1 for falsa e condicao2 for verdadeira
    }else {
        código a ser executado se todas as condicoes anterioes forem falsas
    }*/

    // Crie um programa que irá classificar a idade de uma pessoa (criança, adulto, idoso e etc...)
    
    int idade;

    printf("Digite sua idade:");
    scanf("%d", &idade);

    if (idade <= 12){
        printf("Você é uma criança\n");
    }else if (idade <= 17){
        printf("Você é um adolescente\n");
    }else if (idade <= 59){
        printf("Você é um adulto\n");
    }else{
        printf("Você é um idoso\n");
    }

    /* Crie um programa que determina a nota de um aluno
    
    A >= 90
    B >= 80
    c >= 70
    D >= 60
    E < 60
    */

    int nota;

    printf("Digite sua nota:");
    scanf("%d", &nota);

    if (nota >= 90){
        printf("Você tirou nota A\n");
    }else if (nota >= 80){
        printf("Você tirou nota B\n");
    }else if (nota >=70){
        printf("Você tirou nota C\n");
    }else if (nota >=60){
        printf("Você tirou nota D\n");
    }else{
        printf("Você tirou nota E\n");
    }
}