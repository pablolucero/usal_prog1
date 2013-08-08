#include <stdio.h>

int main()
{

	double num;

	printf("Ingrese un numero: ");
	scanf("%lf", &num);

	if (num > 0)
		printf("El numero es positivo\n");
	else if (num < 0)
		printf("El numero es negativo\n");
	else if (num == 0)
		printf("El numero cero es neutro\n");

	printf("Presione una tecla para salir");
	getchar();getchar();
}