/* Escreva um programa que leia dois números inteiros, nesta ordem:
• X (dividendo)
• Y (divisor)
Como saída, imprima os quatro elementos da divisão inteira, nesta ordem:
• dividendo
• divisor
• quociente
• resto  */
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(){

int x, y;
setlocale (LC_ALL,"portuguese");
    printf("Digite um número: ");
        scanf("%d",&x);
    printf("Digite outro número: ");
        scanf("%d",&y);

    printf("\n O dividendo: %d\n ",x);
    printf("\n O divisor: %d \n", y);
    printf("\n O quociente: %d\n ",x/y);
    printf("\n O resto: %d\n",x%y);










}
