// Crear una estructura llamada "jugador", que almacene la siguiente 
// información sobre jugadores de fútbol:
// -	nombre del jugador
// -	nombre del equipo
// -	cantidad de partidos jugados
// -	cantidad de goles convertidos
// -	promedio de goles por partido

// Utilizando la estructura, declarar un array de 100 elementos de ese tipo.
// Escribir un programa que cargue los datos del array. Se ingresan: nombre 
// del jugador, nombre del equipo, cantidad de partidos jugados y cantidad 
// de goles convertidos. 
// Por cada jugador se calcula el promedio de goles por partido y se almacena 
// en el miembro correspondiente a cada elemento del array. 
// Luego de este proceso se debe mostrar por pantalla la información contenida 
// en el array (nombre del jugador, nombre del equipo, cantidad de partidos 
// jugados, cantidad de goles convertidos y promedio de goles por partido. 
#include <stdio.h>
#define N_JUGADORES 2

struct jugador
{
	char nombre[50];
	char equipo[50];
	int partidosJugados;
	int golesConvertidos;
	float promedioGolesPorPartido;
};

int main() {
	struct jugador jugadores[N_JUGADORES];

	// prototipo de la funcion
	float calcularPromedio(struct jugador unJugador);

	// cargo datos
	for (int i = 0; i < N_JUGADORES; i++) {
		printf("\nIngresa el nombre: ");	
		scanf("%s", jugadores[i].nombre);
		printf("Ingresa el equipo: ");	
		scanf("%s", &jugadores[i].equipo);
		printf("Ingresa la cantidad de partidos jugados: ");	
		scanf("%d", &jugadores[i].partidosJugados);
		printf("Ingresa la cantidad de goles convertidos: ");	
		scanf("%d", &jugadores[i].golesConvertidos);
		jugadores[i].promedioGolesPorPartido = calcularPromedio(jugadores[i]);
	}

	// imprimo datos
	printf("\nRESULTADOS: \n\n");
	
	for(int i = 0; i < N_JUGADORES; i++) {

		printf("Nombre: %s\n", jugadores[0].nombre);	
		printf("Equipo: %s\n", jugadores[i].equipo);	
		printf("Partidos jugados: %d\n", jugadores[i].partidosJugados);	
		printf("Goles convertidos: %d\n", jugadores[i].golesConvertidos);	
		printf("Promedio de goles por partido: %.2f\n\n", jugadores[i].promedioGolesPorPartido);
	}	
}

float calcularPromedio(struct jugador unJugador) {
	float promedio = (float) unJugador.golesConvertidos / unJugador.partidosJugados;
	return promedio;
}
