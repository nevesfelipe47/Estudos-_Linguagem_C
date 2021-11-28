#include <stdio.h>
#include <stdlib.h>

int main()
{

    double area, largura,cumprimento,valorMetro,precoTerreno;

    printf("Digite a largura do terreno: ");
    scanf("%lf",&largura);
    printf("Digite o comprimento do terreno: ");
    scanf("%lf",&cumprimento);
    printf("Digite o Valor do metro quadrado: ");
    scanf("%lf",&valorMetro);

    area = largura * cumprimento;
     precoTerreno=area* valorMetro;

     printf("Area do terreno = %.2lf\n",area);
     printf("Preco do terreno= %.2lf\n",precoTerreno);






    return 0;
}
