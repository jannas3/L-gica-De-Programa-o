/*Michael comprou alguns litros de polpa de frutas, com o objetivo de doar dois terços a uma instituição de caridade
e ficar com um terço.
Escreva um programa que leia quantos litros foram comprados.
 Como saída, apresente a quantidade que ficará com Michael.*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(){
    float qtdlitro;
setlocale (LC_ALL,"portuguese");

    printf("Digite a quantidade de litro: ");
    scanf("%f",&qtdlitro);

    printf("A quantidade restante é: %.3f",qtdlitro/3);





}
