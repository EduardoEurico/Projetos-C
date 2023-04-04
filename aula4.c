#include<stdio.h>
#include <locale.h>

int main(){

   int idade =18;
   int pessoas=0;
   int pessoasjovens=0;
   int maior;
   int menor;
   int jovens;
   printf("Escolha uma idade: ");
   scanf("%i",&idade);

   while (idade!=-1){

        if (maior<idade){
                maior=idade;

        }
        if (menor>idade){
                menor=idade;

        }
        if (idade>=18){
        printf("Digite outra: ");
        scanf("%i",&idade);
        pessoas++;
            if (idade==-1){
                break;
            }
        }
        if (idade<=17)
            printf("Digite outra: ");
        scanf("%i",&idade);
        pessoasjovens++;
   }
     printf("O numero de pessoas com +18 anos %i \n",pessoas);
     printf("A pessoa com a maior idade é: %i",maior);
     printf("A pessoa com a menor idade é: %i",menor);


}
