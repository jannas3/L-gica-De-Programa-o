/*Escreva um programa que leia quatro notas de um aluno. Como sa�da, imprima a m�dia ponderada,
sabendo que os pesos das avalia��es s�o respectivamente: 1, 2, 3 e 4.
Arredonde os resultados com at� 02 casas decimais de precis�o.*/
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

    printf("Sua m�dia �: %.2f", media =((nota1*1)+ (nota2*2)+(nota3*3)+(nota4*4))/10);


}
