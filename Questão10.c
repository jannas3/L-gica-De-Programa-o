#include <stdio.h>
#include <locale.h>
#include <math.h>

main ()
{
    setlocale(LC_ALL,"Portuguese");

    float n,qnt,maior,menor;
    int contador;

    contador=1;
          printf("Informem a quantidade de n�meros que se desejar digitar: ");
          scanf("%f",&qnt);

        while (contador<= qnt)  {
    printf("Digite o n�mero %d: ",contador);
       scanf("%f",&n);
       if (contador ==1){
       maior=n;
       menor=n;
       }
      if (n >= maior){
        maior = n;

      }
      if(menor >= n) {
         menor = n;

      }

       contador=contador+1;

        }

 printf(" O n�mero maior � %.1f \n", maior);
 printf(" O n�mero menor � %.1f \n", menor);
}
