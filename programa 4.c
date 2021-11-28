#include <stdio.h>
#include <string.h>

int main (){

int idade;
char nome[30] ;
double altura;
double peso,imc;

    printf("Bem vindo ao calculo de imc\n");
    printf("------------------------------\n");
    printf("\n");
    printf("Digite seu nome: \n");
    scanf("%s",nome);
    printf("Digite sua idade: \n");
    scanf("%d",&idade);

    printf("Digite sua altura: \n");
    scanf("%lf",&altura);
    printf("Digite seu peso: \n");
    scanf("%lf",&peso);

    imc = peso/(altura*altura);


    printf("%s  \n",nome);
    printf("Seu IMC = %.2lf\n",imc);







}
