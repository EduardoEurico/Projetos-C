#include<stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int x;
    printf("Escolha um número ");
    scanf("%i",&x);
    if (x%2==0){
        printf("O número é multiplo de 2");
    }else{
        printf("não é multiplo de 2");
    }
}
