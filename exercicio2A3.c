#include<stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int x;
    printf("Escolha um n�mero ");
    scanf("%i",&x);
    if (x%2==0){
        printf("O n�mero � multiplo de 2");
    }else{
        printf("n�o � multiplo de 2");
    }
}
