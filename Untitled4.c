#include<stdio.h>
#include <locale.h>


int main(){

    setlocale(LC_ALL, "Portuguese");


    float altura ;
    printf("Digite a sua altura: ");
    scanf("%.2f",&altura);

    float peso;
    printf("Digite o seu peso: ");
    scanf("%.2f",&peso);


    float imc;
    imc = peso/altura*altura;



    printf("%.2f\n","O seu IMC (indice de massa corporal), é: " ,imc);

    return 0;
}

