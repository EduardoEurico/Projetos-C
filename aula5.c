#include<stdio.h>
#include <locale.h>


int main(){

    setlocale(LC_ALL, "Portuguese");

    int n,i;

    printf("Escolha um valor: ");
    scanf("%i",&n);

    for (i=0;i<=n;i++) {

        printf("%i\n",i);
    }


}
