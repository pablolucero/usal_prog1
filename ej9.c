#include <stdio.h>

int main()
{

	const float PULGADA = 2.54;
	const float PIE = 12 * PULGADA;
	float centimetros, pulgadas;
	int pies;

	printf("Ingrese una cantidad de centimetros: ");
	scanf("%f", &centimetros);
	
	pulgadas = centimetros / PULGADA;
	pies = centimetros / PIE;

	printf("%.2f cm son %d pies y %.1f pulgadas\n", centimetros, pies, pulgadas);
	
	printf("Presione una tecla para salir");
	getchar();getchar();
}

// Dados ciertos centímetros como entrada de tipo decimal, 
// escribir su equivalente a pies (enteros) y pulgadas (decimal), 
// dando las pulgadas con una precisión de 1 lugar decimal. 
// Considerar 2.54 cm por pulgada y 12 pulgadas por pie. 
// La salida podrá ser: 333.3 cm son 10 pies y 11.2 pulgadas.