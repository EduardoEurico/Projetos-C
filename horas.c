#include<stdio.h>
#include <locale.h>


int main(){

    setlocale(LC_ALL, "Portuguese");


    float horas;
    printf("Que horas são: ");
    scanf("%.2f",&horas);
    {

    if (0 <= horas && horas >= 6){

        printf("boa madruga chefe\n");


}    else if (7 <= horas){
        printf("bum dia madame\n");

    }

    else if (12 <= horas||horas >= 17){
        printf("coffe time meu rei\n");

}

     else if (18 <= horas||horas >= 23){
        printf("buenas notches ;)) \n");

}


    }
}
