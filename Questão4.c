#include <stdio.h>
#include <locale.h>
#include <math.h>


int main() {
int ano;
setlocale(LC_ALL,"Portuguese");

    printf("Digite o Ano: ");
     scanf("%d",&ano);


    if(ano%400==0 || ano%4==0 && ano%100!=0){
    printf(" O Ano de %d é bisexto.",ano);

   }else{
     printf (" O Ano de%d não é bisexto.",ano);

}

}

