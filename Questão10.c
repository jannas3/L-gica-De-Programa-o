#include <stdio.h>
#include <locale.h>
#include <math.h>

main ()
{
    setlocale(LC_ALL,"Portuguese");

    float n,qnt,maior,menor;
    int contador;

    contador=1;
          printf("Informem a quantidade de números que se desejar digitar: ");
          scanf("%f",&qnt);

        while (contador<= qnt)  {
    printf("Digite o número %d: ",contador);
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

 printf(" O número maior é %.1f \n", maior);
 printf(" O número menor é %.1f \n", menor);
}
