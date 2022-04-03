/*
 Faça um algoritmo que leia três valores que representam os lados de um triângulo. Primeiramente, verifique se os lados podem formar um triângulo (a soma de dois lados não pode ser menor que o terceiro lado). Caso possa formar um triângulo, indique se este é equilátero, isóscele ou escaleno.
a. Equiláteros: tem os comprimentos dos três lados iguais;
b. Isósceles: temos comprimentos de dois lados iguais;
c. Escaleno: temos comprimentos dos três lados diferentes.*/
 
#include <stdio.h>
#include <locale.h>
#include <math.h>

main(){

int n1,n2,n3;
 setlocale(LC_ALL,"Portuguese");

         printf ("\n Digite o valores para verificar se é um triângulo: \n");
         printf("\n Digite o primeiro valor: ");
          scanf("%d",&n1);
         printf("\n Digite o segundo valor do lado: ");
          scanf ("%d",&n2);
          printf("\n Digite o segundo valor do lado: ");
          scanf("%d",&n3);

          if (n1+n2> n3 && n1+n3> n2 && n2+n3>n1){
            printf("\n Os valores formam o triângulo: \n");


          //equilatero: todos os lados são iguais
           if((n1 == n2) && (n2 == n3)){

            printf("O triângulo é equilátero");

          }
          //escaleno: os 3 lados são diferentes
            else
                if((n1 != n2) && (n1 != n3) && (n2 != n3)){

                  printf("O triângulo é escaleno") ;

            }
            //isósceles: 2 lados iguais e 1 diferente
            else
                if ((n1 == n2) || (n1 == n3) || (n2 == n3)) {

         printf("O triângulo é isósceles");

            }
          }
            else

            printf("\n Os três lados não formam um triângulo\n");

}

