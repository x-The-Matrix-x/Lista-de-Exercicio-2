//Questão 5: Faça o mesmo exercício, porém, realizando o calculo dentro do printf

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>


int main(){
    int a, b, x;
    
    printf("Por favor, usuario, Digite 2 valores");
    scanf("%i%i", &a, &b);

    printf("%i + %i ==  %i", a, b, a + b);
    
    return (0);
}
