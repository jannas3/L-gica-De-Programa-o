/*Desenvolva um algoritmo que leia 10 números e imprima a soma dos pares e a quantidade de números ímpares.
*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

main ()
{
    setlocale(LC_ALL,"Portuguese");

    int i,n,pares,impares;
       pares=0;
       impares=0;

     for( i=0; i<10;i++){
      printf("Digite o número: ");
      scanf("%d",&n);

     if (n % 2 == 0){

       pares = pares+ n;
       }
       else{

          impares =impares + 1;
       }




}
        printf("A soma dos número pares %d \n",pares);
       printf("A Quantidade dos  números impares %d : \n",impares );
}
