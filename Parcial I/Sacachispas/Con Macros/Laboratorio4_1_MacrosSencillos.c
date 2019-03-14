/* 1_Laboratorio4. La posici�n de un robot m�vil se controla por medio de comandos num�ricos 
introducidos por el teclado de acuerdo a la tabla siguiente. Inicialmente el robot se encuentra en la posici�n (x=0, y=0). 
E.P. que determine e imprima la posici�n del robot despu�s de N movimientos. 
El n�mero de movimientos totales se debe solicitar al inicio.
Equipo: SacaChispas

Integrantes:
Ricardo Nicol�s Canul Ibarra
Senaida Norely Chan Chan
Javier Alejandro Chim Cem�

Fecha: 14/feb/2019
Version: 1.0 (Usando macros sencillos)*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

#define DERECHA 6
#define IZQUIERDA 4
#define ARRIBA 8
#define ABAJO 2

int main() {
	
	/*Creamos las variables necesarias para el programa*/
	int movimiento_x, movimiento_y, cont_movimientos, movimientos_totales, movimiento;

	/*Inicializamos las variables*/
	movimiento_x = 0;
	movimiento_y = 0;
	cont_movimientos = 1;
	
	
	/*Mostramos un peque�o men�*/
	printf("\n6.- Mover robot a la derecha");
	printf("\n4.- Mover robot a la izquierda");
	printf("\n8.- Mover robot hacia arriba");
	printf("\n2.- Mover robot hacia abajo");
	
	/*Preguntamos el n�mero de movimientos del robot*/
	printf("\n\n�Cu�l es el n�mero de movimientos totales del robot? ");
	scanf("%i", &movimientos_totales);
	
	/*Creamos el ciclo for para la lectura de los movimientos*/
	for (cont_movimientos = 1; cont_movimientos <= movimientos_totales; cont_movimientos++)
	{
		/*ENTRADA DE DATOS para los movimientos del robot*/
		printf("\n\nInserte el movimiento N� %i ", cont_movimientos);
		fflush(stdin); //Limpiamos el caracter que se insert� anteriormente.
		scanf("%i", &movimiento);
		
		/*PROCESO DE LOS DATOS seg�n el tipo de movimiento*/
		switch(movimiento)
		{
			
		case DERECHA:
			
			movimiento_x++;
			
			break;
			
		case IZQUIERDA:
			
			movimiento_x--;
			
			break;
			
		case ARRIBA:
			
			movimiento_y++;
			
			break;
			
		case ABAJO:
			
			movimiento_y--;
			
			break;
			
		default:
			
			printf("\n\nInsert� un n�mero NO v�lido");
			
			cont_movimientos--; //Disminuimos el contador para que no se salte el movimiento actual 
			
		}
	}
	
	/*SALIDA DE DATOS para las coordenadas finales del robot*/
	printf("\n\nLas coordenadas del robot son:\n\nEje X: %i\n\nEje Y:%i\n\n", movimiento_x, movimiento_y);
	
	getch(); //Esperar un caracter del teclado
	
	return 0;
}
/* Calific�: Punto C
-Funciona correctamente, al colocar 6 pasos al robot y colocar los comandos 
6,8,8,8,6,6, el robot queda en x=3 y y=3.
-no valida que el n�mero de pasos sea un entero o cero. Pero una vez que 
lee el n�mero de pasos si valida que correspondan a 2,4,6, u 8.
-Muy interesante al aclarar que el robot se mueve a los lados y no 
seg�n lo planteado en el problema
-El macro funciona correctamente, hace m�s claro el c�digo seg�n el 
planteamiendo de izquierda, derecha, arriba y abajo. Lo hace m�s facil de entender
*/
