#include <stdio.h>

int main() {

    // Objetivo: Imprimir o nome do dia da semana com base em um número de 1 a 7

    int dia;

    printf("Digite o valor do dia\n");
    scanf(" %d", &dia);

    switch (dia){
        case 1:
            printf("Segunda\n");
        break;
        case 2:
            printf("Terça\n");
        break;
        case 3:
            printf("Quarta\n");
        break;
        case 4:
            printf("Quinta\n");
        break;
        case 5:
            printf("Sexta\n");
        break;
        case 6:
            printf("Sábado\n");
        break;
        case 7:
            printf("Domingo\n");
        break;
        default:
            printf("Opção inválida\n");
    }
}