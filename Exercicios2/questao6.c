/*Michael comprou alguns litros de polpa de frutas, com o objetivo de doar dois ter�os a uma institui��o de caridade
e ficar com um ter�o.
Escreva um programa que leia quantos litros foram comprados.
 Como sa�da, apresente a quantidade que ficar� com Michael.*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(){
    float qtdlitro;
setlocale (LC_ALL,"portuguese");

    printf("Digite a quantidade de litro: ");
    scanf("%f",&qtdlitro);

    printf("A quantidade restante �: %.3f",qtdlitro/3);





}
