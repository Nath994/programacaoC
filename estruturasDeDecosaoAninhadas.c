#include <stdio.h>

int main(){

    int idade;
    float renda;

    /*
    if (condicao1){
        if (condicao2){
            código a ser executado se condicao1 e condicao2 forem verdadeiras
        }else {
            código a ser executado se atender a condicao1 e nao atender a condicao2
        }
    } else {
        código a ser executado se todas as condicoes anteriores nao foram atendidas
    }
    */

    //Verifica se a pessoa tem direio a desconto de acordo com a idade e renda. A pessoa deve ter mais de sessenta anos ou menos de 18 anos e ter uma renda mensal abaixo de 2000

    printf("Qual a sua idade?\n");
    scanf("%d", &idade);
    printf("Qual a sua renda mensal?\n");
    scanf("%f", &renda);

    if (idade > 60 || idade < 18){

        if(renda < 2000){
            printf("Parabéns! Você tem direito ao desconto\n");
        
       }else { 
            printf ("Você não tem direito ao desconto, devido à renda!\n");
       }
    } else {
        printf("Você não tem direito ao desconto\n");
    }
    
    // Verificar a qualificação para um programa de beneficios sociais. Analisa idade, renda e número de dependentes.

    // Idade esta entre 18 e 65 anos.
    // Renda menor que 3000.
    // Número de dependentes é maior que 2.

    unsigned int dependentes;

   
    printf("Digite quantos dependentes você tem:\n");
    scanf("%u", &dependentes);

    if(idade >= 18 && idade <= 65){
        if (renda < 3000){
            if (dependentes > 2){
                printf(" Você tem direito ao benefício");
            }else{
                printf("Você não tem direito devido a quantidade de dependentes\n");
            }
        }else{
            printf("Você não tem direito devido à renda.\n");
            }
    
    }else{
        printf("Você não tem direito ao benefício\n");
    }
*/
    // Verificar se um número é positivo, negativo ou zero. Se for positivo verificar se é par ou ímpar (trabalhar tanto com estrutura de decisão encadeada e aninhada)

    int numero;

    printf ("Vamos verificar se um número é positivo (par ou ímpar), negativo ou zero\n");
    printf ("Digite um número:\n");
    scanf("%d", &numero);

    if (numero == 0){
        printf("Número 0\n");
    }else if (numero < 0){
        printf ("Número negativo\n");
    }else{
        if (numero % 2 == 0){
            printf("Número positivo par\n");
        }else{
            printf("Número positivo ímpar\n");
        }
    }




}

