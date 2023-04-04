#include<stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int valor,hvalor,lvalor;
    valor =0;
    printf("Para finalizar digite '-1' \n");
    while (valor!=-1){
        printf("Escolha um valor: ");
        valor = getchar();
        if (hvalor<valor){
                hvalor=valor;
        }if (lvalor>valor){
                lvalor=valor;
        }if (valor==-1){
                break;
            }
        }
    printf("O maior valor digitado é %i", hvalor,lvalor);
}
