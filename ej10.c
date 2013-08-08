#include <stdio.h>

int main()
{
	char vec[5]; // 
	
	printf("Ingrese 20 caracteres: \n");
	scanf("%s", vec);

	printf("Usted puso: %s\n", vec);
	printf("Presione una tecla para salir");
	getchar();getchar();
}

// Escribir en Pseudocódigo y codificar en C un programa que lea 20 caracteres. 
// Luego de la lectura indicar cuantas "a" se ingresaron, cuantas "e, i, o, u"
