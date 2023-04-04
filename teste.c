#include<stdio.h>
#include <locale.h>


int main(){



    float dolar ;
    printf("Digite o valor de dolar atual: ");
    scanf("%f",&dolar);

    float euro;
    printf("Digite o valor de euro atual: ");
    scanf("%f",&euro);

    float real;
    printf("Qual o valor de real desejado converter: ");
    scanf("%f",&real);

    float valord;
    valord = dolar*real;

    float valore;
    valore = euro*real;

    printf("%.2f\n", valord);
    printf("%.2f\n", valore);

    return 0;
}

