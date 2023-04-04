#include<stdio.h>
#include <locale.h>


int main(){

    int x;
    printf("Digite um numeor maior que 5: ");
    scanf("%d",x);
    if (x>5){
        printf(x,"e maior que 5");
    }else if (x==5){
        printf(x, "e igual a 5");
    }else {
        printf(x,"e menor que 5");
    }


}
