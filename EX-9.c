//Quest�o 9: Fa�a um programa que leia o nome de um vendedor, o seu sal�rio fixo e o total de
//vendas efetuadas por ele no m�s (em dinheiro). Sabendo que este vendedor ganha
//15% de comiss�o sobre suas vendas efetuadas, informar o total a receber no final
//do m�s, com duas casas decimais

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main(){
	int vendas;
    float salario, salarioFinal;
    char nome[100];
    
 
    printf("Digite, aqui, o nome do vendedor: ");
    scanf("%s", &nome);
    
    printf("Salario fixo: ");
    scanf("%f", &salario);
    
    printf("Total de vendas: ");
    scanf("%i", &vendas);
    
    getchar();
    salarioFinal = salario + (vendas * 15) / 100;

    printf("\nO nome do vendedero e %s\n", nome);
    
    printf("O seu salario fixo e %f\n", salario);
    
    printf("O numero de vendas foi %i\n", vendas);

    printf("\nO salario final eh %f\n", salarioFinal);
    
    return (0);
}
