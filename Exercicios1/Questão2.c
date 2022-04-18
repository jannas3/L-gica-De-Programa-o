/* Faça um algoritmo que leia um número inteiro e diga se este é positivo, negativo ou zero.  */


#include <stdio.h>
#include <locale.h>
#include <math.h>


int main() {
int n;
setlocale(LC_ALL,"Portuguese");

    printf("Digite o número: ");
        scanf("%d",&n);
    if(n==0){
        printf("Número é igual a zero");
        }
     else if (n>0){
          printf("O número é positivo.");
    }
    else
        printf("O número é negativo.");

}

