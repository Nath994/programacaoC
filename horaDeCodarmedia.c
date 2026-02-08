#include <stdio.h>

int main() {
    // números inteiros
    
    int nota1, nota2, nota3, media;
    
    printf("Digite a sua primeira nota\n");
    scanf("%d", &nota1);

    printf("Digite a sua segunda nota\n");
    scanf("%d", &nota2);
 
    printf("Digite a sua terceira nota\n");
    scanf("%d", &nota3);
 
    media = (nota1 + nota2 + nota3) / 3;
    printf("A média das notas é %d\n", media);
    
    // Números decimais
    
   int nota4, nota5, nota6; 
   float media2;
   
   printf("\n");
   printf("Vamos fazer a média com número decimal\n");
    
    printf("Digite a sua primeira nota\n");
    scanf("%d", &nota4);

    printf("Digite a sua segunda nota\n");
    scanf("%d", &nota5);
 
    printf("Digite a sua terceira nota\n");
    scanf("%d", &nota6);
 
    media2 = (float) (nota4 + nota5 + nota6) / 3;
    printf("A média das notas é %.1f\n", media2);
 
    return 0;
}