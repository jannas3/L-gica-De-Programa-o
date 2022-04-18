/*
A partir da distância total percorrida (em km) e do total de combustível gasto (em litros),
calcule o consumo médio de um automóvel.
Apresente o valor que representa o consumo médio do automóvel com até 3 casas após a vírgula,
seguido da mensagem "km/l".
*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(){
    float km,l;
setlocale (LC_ALL,"portuguese");

    printf("digite o km pecorrida: ");
        scanf("%f",&km);
    printf("Digite o total combustível gasto: ");
        scanf("%f",&l);

    printf("Consumo Médio é: %.3f km/l",km/l);




}
