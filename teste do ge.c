#include<stdio.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL, "Portuguese");


    int x;
    printf("Digite um valor: ");
    scanf("%i",&x);

    if (x%2!=0) {
        printf("� impar");
    }else{
        printf("� par");
    }




    return 0;
}
