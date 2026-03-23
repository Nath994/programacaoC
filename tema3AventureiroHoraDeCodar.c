#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int opcao, escolhaJogador;
    srand(time(0));
    int escolhaComputador = rand() % 3 + 1; // como são 3 opções se usarmos o resto da divisão por 3 só pode ser 0, 1 e 2 e ao sempre adicionar 1 as opções vão ser 1, 2 e 3.

    printf("*** Jokempô *** \n\n");
    printf("Escolha uma opção:\n");
    printf("1. Iniciar jogo\n");
    printf("2. Regras\n");
    scanf(" %d", &opcao);

    switch (opcao){

        case 1: // Iniciar jogo
            printf("Escolha uma opção:\n");
            printf("1. Pedra\n");
            printf("2. Papel\n");
            printf("3. Tesoura\n");
           
            scanf(" %d", &escolhaJogador);


            switch (escolhaJogador){
                case 1: //Pedra
                 printf("Jogador: Pedra - ");
                break;
                case 2: //Papel
                 printf("Jogador: Papel - ");
                break;
                case 3: //Tesoura
                 printf("Jogador: Tesoura - ");
                break;
                default:
                    printf("Opção inválida");
            }

            switch (escolhaComputador){
                case 1: //Pedra
                 printf("Computador: Pedra\n");
                break;
                case 2: //Papel
                 printf("Computador: Papel\n");
                break;
                case 3: //Tesoura
                 printf("Computador: Tesoura\n");
                break;
            }

            if (escolhaComputador == escolhaJogador){
                printf("Empate!\n");
            }else if ((escolhaJogador == 1 && escolhaComputador == 3) || (escolhaJogador == 2 && escolhaComputador == 1) || (escolhaJogador == 3 && escolhaComputador == 2)){
                printf("Você Ganhou!\n");
            }else {
                printf("Você Perdeu!\n");
            }
        
        break;

        case 2: //Regras
            printf("O jogador escolhe entre pedra, papel ou tesoura.\n");
            printf("O computador aleatoriamente escolhe. \n");
            printf("As escolhas são comparadas.\n");
            printf("Quem escolheu papel ganha de quem escolheu pedra, quem escolheu pedra ganha de quem escolheu tesoura, quem escolheu tesoura ganha de quem escolheu papel.\n");
            printf("Se as escolhas forem iguais deu empate. \n");
        break;

        default:
            printf("Opção inválida");
    }
}

