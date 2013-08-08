#include <stdio.h>

int main()
{
	double base, altura, area;

	printf("Ingrese la base del triangulo: ");
	scanf("%lf", &base);
	printf("Ingrese la altura del triangulo: ");
	scanf("%lf", &altura);

	area = (base * altura) / 2;

	printf("El area es: %.2lf\n", area);

	printf("Presione una tecla para salir");
	getchar();getchar();
}