//Questão 7: Leia dois valores inteiros. A seguir, calcule o produto entre estes dois valores e
//atribua esta operação à variável PROD. A seguir mostre a variável PROD com
//mensagem: PROD = “valor de PROD”

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main(){
    int a, b;
    
    printf("Por favor, usuario, digite 2 valores");
    scanf("%i%i", &a, &b);

    printf("%i * %i ==  %i", a, b, a * b);
    
    return (0);
}
