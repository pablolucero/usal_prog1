#include <stdio.h>

int cuadrado(int num);

int main()
{
	float n, resultado;

	printf("Ingrese un numero para calcular su cuadrado: ");
	scanf("%f", &n);

	if (n < 0)
	{
		printf("\nERROR, el número debe ser mayor que cero\n");
		return 0;
	}

	resultado = cuadrado(n);
	printf("\nEl cuadrado del mismo es: %.2f\n\n", resultado);

	printf("Presione una tecla para salir");
	getchar();getchar();
}

int cuadrado(int num) {
	return num * num;
}
