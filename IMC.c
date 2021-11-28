#include <stdio.h>
#include <string.h>

void limpar_entrada(){

    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto (char *buffer, int length){
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
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
    printf("\n\n");

    imc = peso/(altura*altura);

    printf("Nome Completo do usuario: %s",nome);
    printf("idade: %d\n",idade);
    printf("IMC: %.2lf",imc);



return 0;
}
