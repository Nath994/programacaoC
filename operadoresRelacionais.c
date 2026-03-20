int main() {
    /* 
    
    Operadores relacionais
    > (maior que)
    < (menor que)
    >= (maior ou igual a)
    <= (menor ou igual a)
    == (igual a)
    != (diferente de)

    */

    // Variáveis de tipos iguais

    int a = 20;
    int b = 20;

    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);

    // Variáveis de tipos diferentes - Conversão implicita

    int x = 5;
    float y = 5.0;
    char c = 'a';

    printf("x >= y: %d\n", x >= y);
    printf("x == y: %d\n", x == y);
    printf("x != y: %d\n", x != y);

    // O 'a' na tabela ASCII é 97

    printf("x >= c: %d\n", x >= c);
    printf("O valor ASCII de %c é %d: \n", c, c);

    // Variaveis de tipos diferentes - Conversão explicita

    float numero1 = 10.2;
    int numero2 = 10;

    printf("numero1 > numero2: %d\n", (int)numero1 > numero2);
    printf("numero1 == numero2: %d\n", (int)numero1 == numero2);
    // com a conversão explicita de (int) o 10.2 virou 10



    return 0;
}