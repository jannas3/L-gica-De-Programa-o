/* Agora, Estanislau deseja comprar vários jogos para seu console favorito.
 Em um mesmo site, o preço do jogo é sempre o mesmo para todos os títulos.
 O valor do frete é diferente para cada site.
Escreva um programa que leia as seguintes entradas, nesta ordem:
1. A quantidade de jogos a serem encomendados;
2. O valor unitário de cada jogo;
3. O valor do frete.
Como saída, determine o preço total a ser pago por Estanislau pelos jogos que
for encomendar do site, incluindo o valor do frete.   */
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(){
    setlocale(LC_ALL,"Portuguese");
    int qtdjogo;
    float valorjogo, valorfrete,valortotal;

        printf("Digite a quantidade de jogos: ");
            scanf("%d",&qtdjogo);

        printf("Digite o valor unitário do jogo:  ");
            scanf("%f",&valorjogo);

        printf("Digite o valor do frete: ");
            scanf("%f",&valorfrete);

        printf("O valor Total a ser pago é %.2f\n:  ",valortotal=qtdjogo*valorjogo+valorfrete);



}
