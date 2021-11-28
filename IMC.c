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
    printf("\n\n");

    imc = peso/(altura*altura);

    printf("Nome Completo do usuario: %s",nome);
    printf("idade: %d",idade);
    printf("IMC: %.2lf",imc);

    if (imc < 18.5) {
     printf("Peso Abaixo\n");
     }
    else if (double)(imc >=18.5 || &imc=<24.9){
     printf("Peso normal \n");
     }
    else if (&imc>=25.0 || &imc=<29.9){
     printf("Sobrepeso \n");
     }
    else if (&imc>=30.0 || &imc=<34.9){
     printf("Obesidade \n");
     }
    else if (&imc>=35.0 || &imc=<39.9){
     printf("Obesidade \n");
     }

return 0;
}
