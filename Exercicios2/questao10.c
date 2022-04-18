/* Em uma turma de Programação, a nota final (NF) é calculada com base em três outras notas:
1. Média dos Laboratórios (ML) que compõe 25% da nota final.
2. Média dos Trabalhos (MT) que compõe 30% da nota final.
3. Média das Provas (MP) que compõe 45% da nota final.
Escreva um programa que leia, nessas ordem, essas três notas (que estarão entre 0 e 10).
Como saída, seu programa deve imprimir a nota final do aluno com duas casas decimais.   */

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

    printf("Sua nota final é: %.2f",nf=(nota1*0.25)+(nota2*0.3)+(nota3*0.45));





}
