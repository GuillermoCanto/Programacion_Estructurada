/* E.P. que determine e imprima la calificaci�n final de un alumno del curso �Programaci�n Estructurada�. 
El desglose de dicha evaluaci�n est� en escala 100 y tiene los siguientes porcentajes: 40%, dos ex�menes parciales, 
30%, tareas y trabajos,20%, proyecto final y 10%, participaci�n en clase.

Elaborado por:
Ricardo Nicol�s Canul Ibarra
Senaida Norely Chan Chan
Javier Alejandro Chim Cem�

Fecha: 31/ene/2019
Version: 1.0rev
Revisado por: Equipo Picateclas
Observaciones:  El programa cumple con los requisitos dados, buen uso de comentarios, funciona correctamente.
*/


#include <stdio.h>
#include <conio.h>

int main() {
	
	/*Declaramos las variables necesarias para el programa*/
	float calif_parcial1, calif_parcial2, calif_tareas, calif_parciales, calif_proyecto, calif_participacion;
	
	/*Entrada de datos para los parciales*/
	printf ("\nInserte la calificaci�n del primer parcial ");
	scanf("%f", &calif_parcial1);
	
	printf ("\nInserte la calificaci�n del segundo parcial ");
	scanf("%f", &calif_parcial2);
	
	/*Proceso para determinar su porcentaje en relaci�n con la calificaci�n final*/
	calif_parciales = (float)(calif_parcial1 + calif_parcial2) * 40 / 200;
	
	
	/*Entrada de datos para las tareas y trabajos*/
	printf ("\nInserte la calificaci�n de las tareas y trabajos ");
	scanf("%f", &calif_tareas);
	
	/*Proceso para determinar su porcentaje en relaci�n con la calificaci�n final*/
	calif_tareas *= (float) 30 / 100;
	
	
	/*Entrada de datos para el proyecto final*/
	printf ("\nInserte la calificaci�n del proyecto final ");
	scanf("%f", &calif_proyecto);
	
	/*Proceso para determinar su porcentaje en relaci�n con la calificaci�n final*/
	calif_proyecto *= (float) 20 / 100;
	
	
	/*Entrada de datos para la participaci�n*/
	printf ("\nInserte la calificaci�n de la participaci�n ");
	scanf("%f", &calif_participacion);
	
	/*Proceso para determinar su porcentaje en relaci�n con la calificaci�n final*/
	calif_participacion *= (float) 10 / 100;
	
	/*Salida del porcentaje final seg�n lo obtenido*/
	printf ("\nLa calificaci�n final en base a 100 es: %.2f", calif_parciales + calif_tareas + calif_proyecto + calif_participacion);
	
	getch();
	
	return 0;
}

