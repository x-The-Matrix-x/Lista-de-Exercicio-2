//Quest�o 10: Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer
//no plano, p1(x1,y1) e p2(x2,y2) e calcule a dist�ncia entre eles, mostrando 4 casas
//decimais ap�s a v�rgula, segundo a f�rmula:

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main(){
    int x1, x2, y1, y2, distancia;

    printf("Calcule a distancia entre 2 pontos");
    printf("\nPor favor, digite os valores do primeiro ponto:\n ");
    scanf("%i%i", &x1, &x2);
    
    printf("Digite os valores do primeiro ponto:\n ");
    scanf("%i%i", &y1, &y2);

          distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
          printf("A distancia entre os pontos e: %i", distancia);
          
          return (0);
}
