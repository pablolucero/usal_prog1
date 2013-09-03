#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char getch();

char getch() {
  char c;
  do 
    c = getchar();
  while (isspace(c));
  return c;
}

int main()
{
    float altura, alturaMax = 0;
    char nombre[15], apellido[15], nombreMax[15], apellidoMax[15], seguir;
    int i;
    
    do {
        printf("Ingrese un nombre: ");
        scanf("%s", &nombre);
        printf("Ingrese un apellido: ");
        scanf("%s", &apellido);
        printf("Ingrese una altura: ");
        scanf("%f", &altura);
        if (altura > alturaMax) {
            alturaMax = altura;
            for(i = 0; i < 16; i++) {
                nombreMax[i] = nombre[i];
                apellidoMax[i] = apellido[i];
            }
        }
        printf("Presione 's' para seguir. Presione otro caracter para terminar\n");
        seguir = getch();
        
    } while (seguir == 's');      

    printf("El alumno mas alto es %s %s y su altura es de %.2f\n", nombreMax, apellidoMax, alturaMax);
    getchar();getchar();
    return 0;
}