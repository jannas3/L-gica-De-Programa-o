/*Objetivo: calcular o d�gito verificador de uma conta banc�ria
As contas banc�rias do banco Gringotes s�o identificadas por uma sequ�ncia de quatro d�gitos, mais um d�gito verificador.
Exemplo:
1538-?
Para calcular o d�gito verificador, procede-se assim:
1. Come�ando da direita para a esquerda, cada d�gito da conta � multiplicado por um n�mero, sendo o primeiro por 2, depois por 3, depois por 4, e depois por 5.
2. O somat�rio dessas multiplica��es � dividido por 11.
3. O resto desta divis�o (m�dulo 11) � o d�gito verificador.
1538-6*/
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main(){
    int n1,n2,n3,n4,dg;
    setlocale (LC_ALL,"portuguese");

    printf("Digite os quatros d�gitos da conta bancaria: \n");
        scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
            dg =((n1*5)+ (n2*4)+(n3*3)+(n4*2));

    printf("O d�gito verificador �: %d%d%d%d-%d ",n1,n2,n3,n4,dg%11);



}
