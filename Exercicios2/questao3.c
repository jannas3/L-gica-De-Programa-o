/* Escreva um programa que leia dois n�meros inteiros, nesta ordem:
� X (dividendo)
� Y (divisor)
Como sa�da, imprima os quatro elementos da divis�o inteira, nesta ordem:
� dividendo
� divisor
� quociente
� resto  */
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(){

int x, y;
setlocale (LC_ALL,"portuguese");
    printf("Digite um n�mero: ");
        scanf("%d",&x);
    printf("Digite outro n�mero: ");
        scanf("%d",&y);

    printf("\n O dividendo: %d\n ",x);
    printf("\n O divisor: %d \n", y);
    printf("\n O quociente: %d\n ",x/y);
    printf("\n O resto: %d\n",x%y);










}
