#include <stdio.h>
#include <string.h>

void limpar_entrada(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main(){

    int idade;
    double peso,altura,imc;
    char genero;
    char nome[50];


    printf("Digite o valor da Idade ");
    scanf("%d", &idade);
    printf("Digite o nome da pessoa: ");
    limpar_entrada();
    fgets(nome,50,stdin);

    printf("Digite o seu peso: ");
    scanf("%lf",&peso);
    printf("Digite a sua altura: ");
    scanf("%lf",&altura);




}
