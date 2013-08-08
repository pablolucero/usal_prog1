#include <stdio.h>

int main()
{
	float celsius, fahrenheit; 

	printf("Ingrese valor en grados Celsius: ");
	scanf("%f", &celsius);

	fahrenheit = ((celsius * 9) / 5) + 32;
	
	printf("%.2fº Celsius son %.2fº Fahrenheit\n", celsius, fahrenheit);

	printf("Presione una tecla para salir");
	getchar();getchar();
}