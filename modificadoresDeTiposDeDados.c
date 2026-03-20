#include <stdio.h>

    int main() {

        //unsigned

        int numeroSinal = 3000000000; // Este valor excede o limite de um int normal
        unsigned int numeroSemSinal = 3000000000;

        printf("Número com sinal: %d\n", numeroSinal);
        printf("Número sem sinal: %u\n", numeroSemSinal);

        //Long int e Long Long int

        int numeroNormal = 2147483647; // Este valor excede o limite de um int normal
        long int numeroGrande = 2147483647;
        

        printf("Número normal (int): %d\n", numeroNormal);
        printf("Número grande (long int): %ld\n", numeroGrande);

        numeroNormal = 2147483648; // Valor maior que o máximo de int
        numeroGrande = 2147483648; // Valor maior que o máximo de int, mas com long int
        printf("Número grande atualizado (int) : %d\n", numeroNormal);
        printf("Número grande atualizado (long int) : %ld\n", numeroGrande);

        //Long Double

        double numeroPreciso = 3.141592653589793;
        long double numeroMuitoPreciso = 3.141592653589793238463;

        printf("Número preciso (double) %.15f\n", numeroPreciso);
        printf("Número muito preciso (long double) %.21Lf\n", numeroMuitoPreciso); // o especificador de formato do long double tem L maiúsculo

        // short int

        numeroNormal = 32768;
        short int numeroPequeno = 32767; // Valor máximo de short int
        short int numeroPequeno2 = 32768; // Valor que ultrapassa o máximo de short int

      
        printf("Número pqueno máximo de short int: %d\n", numeroPequeno);
        printf("Número pequeno que ultrapassa o short int: %d\n", numeroPequeno2);
        printf("Número pequeno em int que ultrapassa o maximo de short int: %d\n", numeroNormal);

        // Tamanho das variáveis

        printf("char: ") 
        return 0; 

    }  