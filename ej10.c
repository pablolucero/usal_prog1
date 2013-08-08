// #include <stdio.h>

// int main()
// {
// 	char vec[5]; // 
	
// 	printf("Ingrese 20 caracteres: \n");
// 	scanf("%s", vec);

// 	printf("Usted puso: %s\n", vec);
// 	printf("Presione una tecla para salir");
// 	getchar();getchar();
// }

// Escribir en Pseudocódigo y codificar en C un programa que lea 20 caracteres. 
// Luego de la lectura indicar cuantas "a" se ingresaron, cuantas "e, i, o, u"

#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>
#define MAX 3

int main(){
	int i, vec[MAX];
	/* 
       La función initscr(); permite la inicialización de la consola
     */
    initscr();
    erase(); // Limpia la pantalla (consola)
	for(i=0; i<=MAX; i++)
   {
   	         printw("Ingrese un numero: ");
   	         scanw("%d", &vec[i]);
   }
   for(i=0; i<=MAX; i++)
   	        printw("- %d\n", vec[i]);
   getch();
   endwin(); // Cierra la aplicación
   return 0;
}
/*
  Para compilar:  gcc archivo.c -o archivo -lncurses
*/