#include<stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float nota;
    printf("Qual foi a sua nota? ");
    scanf("%f",&nota);
    if (nota >= 5){
        printf("Aprovado");
    }else {
        printf("Reprovado");
    }
}
