/*Dado um ano d.C. (depois de Cristo), identifique se este é um ano bissexto ou não. Considere que para o ano ser bissexto
basta que seja divisível por 400. Caso contrário, este precisará ser divísivel por 4 e não ser divisível por 100, para ser bissexto.
Se não atender nenhuma das condições acima, ele não é bissexto.
   */
    
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

