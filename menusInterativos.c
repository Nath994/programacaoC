#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int opcao, numeroSecreto, palpite;

    //Menu do jogo

    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção\n");
    scanf(" %d",&opcao);

    switch(opcao){
        case 1:
            srand(time(0));
            //o srand inicializa o gerador de números aleátorios. O problema é que ele repete a sequencia sempre que roda. Para burlar esse problema vamos usar o horario que esta sendo executado o jogo, usando o time.

            numeroSecreto = rand() % 10;
            // como o rand pode gerar um número aleátorio grande vamos pegar o resto da divisão por 10 que pode ser de 0 a 9.

            printf("Digite um número de 1 a 9:\n");
            scanf(" %d", &palpite);
            printf("O número secreto é %d\n", numeroSecreto);
            if (numeroSecreto == palpite){
                printf("Parabéns, você acertou!\n");
            }else{
                printf("Game Over\n");
            }

        break;
        case 2:
            printf("As regras são.....\n");
        break;
        case 3:
            printf("Saindo do jogo....\n");
        break;
        default:
            printf("Opção inválida\n");

    }
}