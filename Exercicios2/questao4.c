/* Bilichilde � consultora de uma linha de cosm�ticos.
 Seu lucro sobre o valor total de vendas � de 30%.
Escreva um programa que leia o total de vendas de Bilichilde.
Como sa�da, determine o valor do lucro obtido (em reais).   */
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(){
    float valorvenda;
    setlocale (LC_ALL,"portuguese");

    printf("Digite o valor da venda: ");
        scanf("%f",&valorvenda);

    printf("O valor do lucro �: %.2f ",valorvenda*0.3);




}
