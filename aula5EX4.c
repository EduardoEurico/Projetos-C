#include<stdio.h>
#include <locale.h>


int main(){

    setlocale(LC_ALL, "Portuguese");
    float i,m,media;
    int n;
    printf("Quantos n�meros voc� deseja utilizar?\n ");
    scanf("%i",&n);

    for (i=0;i<n;i++){
        printf("Quais s�o os n�meros?\n ");
        scanf("%f",&m);
        media+=m;
    }
    media=media/n;
    printf("%.2f\n",media);

}
