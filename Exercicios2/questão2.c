/* Agora, Estanislau deseja comprar v�rios jogos para seu console favorito.
 Em um mesmo site, o pre�o do jogo � sempre o mesmo para todos os t�tulos.
 O valor do frete � diferente para cada site.
Escreva um programa que leia as seguintes entradas, nesta ordem:
1. A quantidade de jogos a serem encomendados;
2. O valor unit�rio de cada jogo;
3. O valor do frete.
Como sa�da, determine o pre�o total a ser pago por Estanislau pelos jogos que
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

        printf("Digite o valor unit�rio do jogo:  ");
            scanf("%f",&valorjogo);

        printf("Digite o valor do frete: ");
            scanf("%f",&valorfrete);

        printf("O valor Total a ser pago � %.2f\n:  ",valortotal=qtdjogo*valorjogo+valorfrete);



}
