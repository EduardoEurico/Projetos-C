#include<stdio.h>
#include <locale.h>


int main(){

    setlocale(LC_ALL, "Portuguese");

    int porta;
    printf("Escolha um valor de porta: ");
    scanf("%i",&porta);
    switch(porta){

    case 1:
    printf("morte\n");
    break;


     case 2:
    printf("le�o\n");
    break;


     case 3:
    printf("1 milh�o de reais mas vai ficar careca maoiii!!!\n");
    break;


     case 4:
    printf("fusca azul toma soc�o\n");
    break;


     case 5:
    printf("sanduba\n");
    break;


     default:
        printf("valor invalido bo�al!\n");
        break;

    }







}
