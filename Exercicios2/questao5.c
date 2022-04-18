/*Escreva um programa que leia quatro notas de um aluno. Como saída, imprima a média ponderada,
sabendo que os pesos das avaliações são respectivamente: 1, 2, 3 e 4.
Arredonde os resultados com até 02 casas decimais de precisão.*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(){
    float nota1,nota2,nota3,nota4,media;
setlocale (LC_ALL,"portuguese");
    printf("Digite sua nota: ");
        scanf("%f",&nota1);
    printf("Digite sua nota: ");
     scanf("%f",&nota2);
    printf("Digite sua nota: ");
     scanf("%f",&nota3);
    printf("Digite sua nota: ");
     scanf("%f",&nota4);

    printf("Sua média é: %.2f", media =((nota1*1)+ (nota2*2)+(nota3*3)+(nota4*4))/10);


}
