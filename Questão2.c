#include <stdio.h>
#include <locale.h>
#include <math.h>


int main() {
int n;
setlocale(LC_ALL,"Portuguese");

    printf("Digite o n�mero: ");
        scanf("%d",&n);
    if(n==0){
        printf("N�mero � igual a zero");
        }
     else if (n>0){
          printf("O n�mero � positivo.");
    }
    else
        printf("O n�mero � negativo.");

}

