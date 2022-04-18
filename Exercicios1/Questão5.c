/*
Da mesma forma que a multiplicação pode ser expressa como o resultado de várias adições, a potenciação pode ser representada por uma série de multiplicações.
Faça um algoritmo que calcule a potenciação utilizando o operador da multiplicação.
Onde seja lido a base e o expoente da potenciação. Teste para evitar expoentes menores que zero. Se o expoente for 0 (zero) o resultado é 1.
*/

#include <stdio.h>
#include <math.h>

main ()
{
    int cont;
    float base, expoente, potencia;

	printf("Digite o valor da base: ");
	scanf("%f", &base);

	printf("Digite o valor do expoente: ");
	scanf("%f", &expoente);

	if (expoente == 0) {

		potencia = 1;

	}

	else {

		if (expoente < 0) {

			base = 1 / base;
			expoente = -(expoente);
		}

		cont= 1;
		potencia = base;

		while (cont< expoente) {

			potencia=potencia*base ;
			cont=cont+1;
		}

	}

	printf("O resultado da potencia: %2.f\n", potencia);

}
