// De los 100 alumnos de una escuela se ingresa:
// nota del 1° trimestre, nota del 2° trimestre, nota del 3° trimestre
// El orden de ingreso coincide con su número de legajo que es de 1 a 100
// Luego del registro el programa debe preguntar al usuario si desea corregir 
// alguna nota, para lo cual se debe ingresar:

// N° de legajo
// Trimestre a corregir (1,2 o 3)
// Nueva nota
// El programa debe mostrar la nota anterior correspondiente al trimestre indicado 
// y preguntar si confirma la modificación. Si contesta “SI” se registra la nueva nota, 
// caso contrario pregunta si desea continuar. 
// Cuando no se registren más modificaciones se deberá listar:
// 
// N° DE LEGAJO 	1° TRIMESTRE 	2° TRIMESTRE 	3° TRIMESTRE 	PROMEDIO
//    XXXX 			XX 				XX 				 XX 		 XX.XX

// FALTA MUCHO POR PULIR: mostrar mensajes informando input y output entre otras cosas
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define N 2

// prototipo e implementacion de getch() para que ande en Unix 
char getch();

char getch() {
  char c;
  do 
    c = getchar();
  while (isspace(c));
  return c;
}

struct legajo {
  int numl;
	float n1, n2, n3;
} ;

// prototipo
void imprimirLegajos(struct legajo legajos[N]);
 
int main() { 
	float promedio;
	struct legajo legajos[N];
	char cont;
	int x, numLegajo, nota;
	float valor;
 
	for (x = 0; x < N; x++)
	{
		printf("Ingrese numero de Legajo: "); 
		scanf("%d", &legajos[x].numl);
		printf("Ingrese nota 1: ");
		scanf("%f", &legajos[x].n1);
		printf("Ingrese nota 2: ");
		scanf("%f", &legajos[x].n2);
		printf("Ingrese nota 3: ");
		scanf("%f", &legajos[x].n3);
	}
	
	cont = getch();
	
	while (cont =='s')
	{
		scanf("%d", &numLegajo);
		scanf("%d", &nota);
		scanf("%f", &valor);
		for (x = 0; x < N; x++) {
			if (legajos[x].numl == numLegajo) {
				switch (nota) {
					case 1:
						legajos[x].n1=valor;
						break;
					case 2:
						legajos[x].n2=valor;
						break;
					case 3:
						legajos[x].n3=valor;
						break;
				}
				break;
			}
		}
		printf("Presione 's' para seguir. Presione otro caracter para terminar\n");
		cont = getch();
	}
	imprimirLegajos(legajos);
	getchar();getchar();
	return 0;
}
 
void imprimirLegajos(struct legajo legajos[N]){
	int x;
	float prom;
	for (x = 0; x < N; x++) {
		prom = (legajos[x].n1+legajos[x].n2+legajos[x].n3)/3;
		printf("%d %.2f %.2f %.2f %.2f \n", legajos[x].numl,legajos[x].n1,legajos[x].n2,legajos[x].n3,prom);
	}
}