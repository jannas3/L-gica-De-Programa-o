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
