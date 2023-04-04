#include<stdio.h>
#include <locale.h>


int main(){

    int valor1;
    printf("Digite um valor: ");
    scanf("%d",&valor1);

    int valor2;
    printf("Digite outro valor: ");
    scanf("%d",&valor2);

    if (valor1<valor2){
        printf("%d",valor2);
    }else if (valor1>valor2){
        printf("%d",valor1);
    }else {
        printf("reinicie");
    }

}
