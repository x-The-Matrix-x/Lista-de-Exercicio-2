//Quest�o 3: Fa�a um algoritmo que leia um numero inteiro, dois n�meros reais (um float e um
//double), um caracter (uma �nica letra), uma string (conjunto de caracteres) e um
//booleano. Na sequ�ncia, imprima todos com a formata��o abaixo.
//Numero inteiro: �valor�
//Numeros reais:
//�valor�
//�valor�
//Letra: �valor�
//String: �valor�
//Logico: �valor�

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main(){
    int inteiro;   float real1;    double real2;   
    char c, s[100]; 


     printf("Por favor, usuario, digite 1 valor inteiro 2 reais\n");
     scanf("%i%f%lf", &inteiro, &real1, &real2);
     printf("Digite uma letra uma palavra e um bool\n");
           getchar();
           scanf("%c%s", &c, &s);

     printf("numero inteiro: %i\n", inteiro);
     printf("\nnumeros reais: %f e %f", real1, real2);
     printf("\nletra: %c", c);
     printf("\nstring: %s", s);
     
     return (0);
}
