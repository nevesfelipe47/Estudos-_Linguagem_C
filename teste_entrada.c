#include <stdio.h>
#include <string.h>

void limpar_entrada(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main(){

    int idade;
    double salario,altura;
    char genero;
    char nome[50];


    printf("Digite o valor da Idade ");
    scanf("%d", &idade);
    printf("Digite o nome da pessoa: ");
    limpar_entrada();
    fgets(nome,50,stdin);


}
