/*    */
#include<stdio.h>
#include<locale.h>

int main(){
    setlocale (LC_ALL,"portuguese");

    int ano;
        printf("Digite o Ano: ");
            scanf("%d",&ano);
        printf("Em %d a Est�cio completou %d anos de funda��o.",ano,ano-1970);

}
