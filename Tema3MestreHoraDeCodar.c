#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    //Desenvolver um jogo de Maior, Menor ou Igual
    //Requisitos: Usar operadores ternários, estruturas de decisão if, if-else e switch
    //O jogador escolhe um número e um tipo de comparação (maior, menor ou igual) para competir com um numero gerado aleatoriamente pelo computador

    int jogador, computador;
    char opcao;

    srand(time(0));
    computador = rand() % 100 + 1;
    

    printf("### Jogo Maior, Menor ou Igual ###\n\n");
    printf("Escolha um número de 1 a 100\n");
    scanf("%d", &jogador);
    
    printf("Você acha que seu número é:\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");
    scanf(" %c", &opcao);

    switch(opcao){
        case 'M':
        case 'm':
            jogador > computador ? printf("Você Ganhou!\n") : printf("Você Perdeu!\n");
        break;

        case 'N':
        case 'n':

            jogador < computador ? printf("Você Ganhou!\n") : printf("Você Perdeu!\n");
        break;

        case 'I': 
        case 'i':
            jogador == computador ? printf("Você Ganhou!\n") : printf("Você Perdeu!\n");
        break;
    
        default:
            printf("Opção Inválida!\n");
    }

    printf("Computador: %d - Jogador: %d", computador, jogador);

    

}