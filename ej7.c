#include <stdio.h>

int main()
{
	int num, resto; 

	printf("Ingrese un numero: ");
	scanf("%d", &num);

	resto = num % 2;

	if (resto == 0)
		printf("El numero es par\n");
	else 
		printf("El numero es impar\n");

	printf("Presione una tecla para salir");
	getchar();getchar();
}