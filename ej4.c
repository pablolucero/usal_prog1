#include <stdio.h>

int main()
{
	const double PI = 3.1415927;
	double radio, circunferencia, area;

	printf("Ingrese el radio del circulo: ");
	scanf("%lf", &radio);

	circunferencia = 2 * radio * PI;
	area = PI * (radio * radio);

	printf("Circunferencia = %lf\n", circunferencia);
	printf("Area = %lf\n", area);

	printf("Presione una tecla para salir");
	getchar();getchar();
}