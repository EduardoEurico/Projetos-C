#include<stdio.h>
#include <locale.h>


char teste(ola){

}

int main(){
    setlocale(LC_ALL, "Portuguese");

    int x=0;
    char y;
    printf("escolha um caracter ");
    scanf("%c",&y);
    do{
    printf("O caracter é %c\n",y);
    x++;}
    while (x<6);

        }


