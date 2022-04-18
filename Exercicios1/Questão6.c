/*Construa um algoritmo que leia o sexo de uma quantidade desconhecida de pessoas. 
    Quando uma pessoa for do sexo feminino, o valor lido será “F”. Se for masculino, será “M”. Quando o valor for diferente de “M” ou “F”, 
informe a quantidade de pessoas do sexo feminino e do sexo masculino. Informe também a porcentagem de pessoas do sexo feminino e do sexo masculino.
    
    */

#include <stdio.h>
#include <math.h>
main(){

    int soma1 = 0, soma2 = 0;
    char sexo;
    float percentM, percentF;


    while( (sexo = 'm') && (sexo = 'f') ){

        printf("Digite seu sexo  (f= Feminino m= Masculino) : ");
        scanf(" %c", &sexo);

        if(sexo == 'f'){
                soma1++;
        }

            else

        if(sexo == 'm'){
            soma2++;

        }
        else
        if ((sexo != 'm') && (sexo != 'f')){
            break;
        }

    }

printf("Quantidade de pessoas do sexo feminino  eh:  %d\n" ,soma1);
printf("Quantidade de pessoas do sexo masculino eh: %d\n", soma2);

printf("A percentagem de pessoas do sexo feminino  eh: %.2f\n", percentF = (soma1 * 100) / (soma1 + soma2));
printf("A percentagem de pessoas do sexo masculino eh: %.2f\n",percentM = (soma2 * 100) / (soma1 + soma2));

}
