/*Objetivo: calcular o dígito verificador de uma conta bancária
As contas bancárias do banco Gringotes são identificadas por uma sequência de quatro dígitos, mais um dígito verificador.
Exemplo:
1538-?
Para calcular o dígito verificador, procede-se assim:
1. Começando da direita para a esquerda, cada dígito da conta é multiplicado por um número, sendo o primeiro por 2, depois por 3, depois por 4, e depois por 5.
2. O somatório dessas multiplicações é dividido por 11.
3. O resto desta divisão (módulo 11) é o dígito verificador.
1538-6*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(){
    int n1,n2,n3,n4,dg;
    setlocale (LC_ALL,"portuguese");

    printf("Digite os quatros dígitos da conta bancaria: \n");
        scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
            dg =((n1*5)+ (n2*4)+(n3*3)+(n4*2));

    printf("O dígito verificador é: %d%d%d%d-%d ",n1,n2,n3,n4,dg%11);



}
