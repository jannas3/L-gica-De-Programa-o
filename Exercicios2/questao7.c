/*
A partir da dist�ncia total percorrida (em km) e do total de combust�vel gasto (em litros),
calcule o consumo m�dio de um autom�vel.
Apresente o valor que representa o consumo m�dio do autom�vel com at� 3 casas ap�s a v�rgula,
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
    printf("Digite o total combust�vel gasto: ");
        scanf("%f",&l);

    printf("Consumo M�dio �: %.3f km/l",km/l);




}
