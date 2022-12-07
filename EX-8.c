//Questão 8: Leia quatro valores inteiros A, B, C e D. A seguir, calcule e mostre a diferença do
//produto de A e B pelo produto de C e D segundo a fórmula: DIFERENCA = (A * B -
//C * D). Apresente o resultado da seguinte forma:
//DIFERENCA = (“valor de A” * “valor de B” - ““valor de C” * ““valor de D”)
//DIFERENCA = “vaor de DIFERENCA

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main(){
    int a, b, c, d, x;
    
    printf("Por favor, usuario, digite 4 valores");
    scanf("%i%i%i%i", &a, &b, &c, &d);

    x = a * b - c * d;
    printf("%i * %i -  %i * %i ==  %i", a, b, c, d, x);
    
    return (0);
}
