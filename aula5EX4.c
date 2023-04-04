#include<stdio.h>
#include <locale.h>


int main(){

    setlocale(LC_ALL, "Portuguese");
    float i,m,media;
    int n;
    printf("Quantos números você deseja utilizar?\n ");
    scanf("%i",&n);

    for (i=0;i<n;i++){
        printf("Quais são os números?\n ");
        scanf("%f",&m);
        media+=m;
    }
    media=media/n;
    printf("%.2f\n",media);

}
