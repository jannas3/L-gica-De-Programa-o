#include <stdio.h>
#include <locale.h>
#include <math.h>

main(){

int n1,n2,n3;
 setlocale(LC_ALL,"Portuguese");

         printf ("\n Digite o valores para verificar se � um tri�ngulo: \n");
         printf("\n Digite o primeiro valor: ");
          scanf("%d",&n1);
         printf("\n Digite o segundo valor do lado: ");
          scanf ("%d",&n2);
          printf("\n Digite o segundo valor do lado: ");
          scanf("%d",&n3);

          if (n1+n2> n3 && n1+n3> n2 && n2+n3>n1){
            printf("\n Os valores formam o tri�ngulo: \n");


          //equilatero: todos os lados s�o iguais
           if((n1 == n2) && (n2 == n3)){

            printf("O tri�ngulo � equil�tero");

          }
          //escaleno: os 3 lados s�o diferentes
            else
                if((n1 != n2) && (n1 != n3) && (n2 != n3)){

                  printf("O tri�ngulo � escaleno") ;

            }
            //is�sceles: 2 lados iguais e 1 diferente
            else
                if ((n1 == n2) || (n1 == n3) || (n2 == n3)) {

         printf("O tri�ngulo � is�sceles");

            }
          }
            else

            printf("\n Os tr�s lados n�o formam um tri�ngulo\n");

}

