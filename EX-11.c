//Quest�o 11: Fa�a um programa que calcule e mostre a �rea da superf�cie e o volume de uma
//esfera sendo fornecido o valor de seu raio (R). A f�rmula para calcular o volume �:
//(4/3) * pi * R�. A f�rmula para calcular a �rea �: 4 * pi * R�. Considere (atribua)
//para pi o valor 3.14159. Use o conceito de constante Dica: Ao utilizar a f�rmula,
//procure usar (4/3.0) ou (4.0/3), pois algumas linguagens (dentre elas o C++),
//assumem que o resultado da divis�o entre dois inteiros � outro inteiro.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main(){
    float raio, volume, area, PI;

    printf("Por gentileza, usuario, digite o raio da esfera: ");
    scanf("%f", &raio);

    volume = (4/3.0) * PI * pow(raio, 3);
    area = 4 * PI * pow(raio, 2);

        printf("O volume da esfera e %f\n", volume);
        printf("A area da esfera e: %f\n", area);

return (0);


}

