#include <stdio.h>
#include <locale.h>
#include <math.h>


int main() {
int n1,n2,operacao;
float r;
setlocale(LC_ALL,"Portuguese");

     printf(" Entre com o n�mero da op��o abaixo: ");
     printf(" \n 1- soma \n 2- subitra��o \n 3- multiplica��o \n 4- divis�o \n ");
     scanf("%d",&operacao);
      printf (" Digite um n�mero: ");
      scanf("%d",&n1);
      printf (" Digite outro n�mero: ");
      scanf("%d",&n2);


      switch (operacao){
       case 1:
            printf("O Resultado da Soma �: %.2f",r=n1+n2);
               break;
      case 2:
             printf("O Resultado da Subtra��o: � %.2f",r=n1-n2);
                break;
      case 3:
         printf("O Resultado da Multiplica��o: � %.2f", r=n1*n2);
            break;
      case 4:
            printf("O Resultado da Divis�o �: %.2f", r=n1/n2);
               break;

      default: printf(" Op��o inv�lida! ");

}

}
