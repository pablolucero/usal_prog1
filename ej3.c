#include <stdio.h>

int main()
{

	int num, mayores = 0, menores = 0, cont=0;

	while (cont < 5) {
		printf("Ingrese un numero: ");
		scanf("%f", &num);
		
		if (num > 0)
			mayores++;

		if (num < 0)
			menores++;

		cont++;
	}

	printf("Mayores: %d\n", mayores);
	printf("Menores: %d\n", menores);

	printf("Presione una tecla para salir");
	getchar();getchar();
}

