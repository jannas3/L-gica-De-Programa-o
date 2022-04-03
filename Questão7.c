/*
7. Certa firma fez uma pesquisa de Mercado para saber se as pessoas gostaram ou não de um novo produto lançado no mercado.
Para isso forneceu o sexo do entrevistado e sua resposta (sim ou não). 
Sabendo-se que foram entrevistadas 20 pessoas, fazer um algoritmo que calcule e escreva:
a. A quantidade de pessoas que responderam sim;
b. A quantidade de pessoas que responderam não;
c. A porcentagem de pessoas do sexo feminino que responderam sim;
d. A porcentagem de pessoas do sexo masculino que responderam não.

*/

#include <stdio.h>
#include <math.h>
main(){

    int i, cont1 = 0, cont2 = 0, soma1 = 0, soma2 = 0;
    char sexo, resposta;
    float percentM, percentF;

    for(i = 1; i <= 2; i++){
        printf("Digite o sexo da pessoa (f= femino m= masculino) e a resposta (s= sim, n = nao): ");
        scanf(" %c %c", &sexo, &resposta);
        if(resposta == 's'){
                cont1++;
        if(sexo == 'f') soma1++;
        }

            else {
                cont2++;
        if(sexo == 'm') soma2++;
        }
    }

printf("O numero de pessoas que responderam sim e: %d\n", cont1);
printf("O numero de pessoas que responderam nao e: %d\n", cont2);
printf("A porcentagem de pessoas do sexo feminino que responderam sim e: %.2f\n", percentF = (soma1 * 100) / (cont1 + cont2));
printf("A porcentagem de pessoas do sexo masculino que responderam nao e %.2f\n",percentM = (soma2 * 100) / (cont1 + cont2));
}
