/* Em uma turma de Programa��o, a nota final (NF) � calculada com base em tr�s outras notas:
1. M�dia dos Laborat�rios (ML) que comp�e 25% da nota final.
2. M�dia dos Trabalhos (MT) que comp�e 30% da nota final.
3. M�dia das Provas (MP) que comp�e 45% da nota final.
Escreva um programa que leia, nessas ordem, essas tr�s notas (que estar�o entre 0 e 10).
Como sa�da, seu programa deve imprimir a nota final do aluno com duas casas decimais.   */

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(){
    float nota1,nota2,nota3,nf;
setlocale (LC_ALL,"portuguese");

    printf("Digite sua nota: ");
        scanf("%f",&nota1);
    printf("Digite sua nota: ");
        scanf("%f",&nota2);
    printf("Digite sua nota: ");
        scanf("%f",&nota3);

    printf("Sua nota final �: %.2f",nf=(nota1*0.25)+(nota2*0.3)+(nota3*0.45));





}
