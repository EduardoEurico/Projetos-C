#include<stdio.h>
#include <locale.h>


int main(){

    int x,y;
    printf("Digite um valor: ");
    scanf("%d",&x);
    printf("Digite outro valor: ");
    scanf("%d",&y);

    switch(x>y){
    case 1:
        printf("Maior valor:%d ",x);
        break;
    case 0:
        printf("Maior valor:%d ",y);
        break;



        }return 0;


    }


