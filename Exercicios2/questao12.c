/*    */
#include<stdio.h>
#include<locale.h>

int main(){
    setlocale (LC_ALL,"portuguese");

    int ano;
        printf("Digite o Ano: ");
            scanf("%d",&ano);
        printf("Em %d a Estácio completou %d anos de fundação.",ano,ano-1970);

}
