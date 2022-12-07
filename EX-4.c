//Questão 4: Leia 2 valores inteiros e armazene-os nas variáveis A e B. Efetue a soma
//de A e B atribuindo o seu resultado na variável X. Imprima o resultado da seguinte
//forma “valor de A” + “valor de B” = “valor de X”.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main(){
    int a, b, x;
    
    printf("Por favor, digite 2 valores");
    scanf("%i%i", &a, &b);

    x = a + b;
    printf("%i + %i ==  %i", a, b, x);
    
    return (0);
    
}
    
