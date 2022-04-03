#include <stdio.h>
#include <locale.h>
#include <math.h>


int main() {
int n1,n2,operacao;
float r;
setlocale(LC_ALL,"Portuguese");

     printf(" Entre com o número da opção abaixo: ");
     printf(" \n 1- soma \n 2- subitração \n 3- multiplicação \n 4- divisão \n ");
     scanf("%d",&operacao);
      printf (" Digite um número: ");
      scanf("%d",&n1);
      printf (" Digite outro número: ");
      scanf("%d",&n2);


      switch (operacao){
       case 1:
            printf("O Resultado da Soma é: %.2f",r=n1+n2);
               break;
      case 2:
             printf("O Resultado da Subtração: é %.2f",r=n1-n2);
                break;
      case 3:
         printf("O Resultado da Multiplicação: é %.2f", r=n1*n2);
            break;
      case 4:
            printf("O Resultado da Divisão é: %.2f", r=n1/n2);
               break;

      default: printf(" Opção inválida! ");

}

}
