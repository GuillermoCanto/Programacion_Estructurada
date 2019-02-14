/* 41.- E.P. que lea las calificaciones del primer parcial de los
estudiantes de algoritmos y que calcule e imprima el promedio de todo
el grupo.

Equipo: SacaChispas

Integrantes:
Ricardo Nicol�s Canul Ibarra
Senaida Norely Chan Chan
Javier Alejandro Chim Cem�
Fecha: 7/feb/2019
Version: 1.0 */

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {
	
	/*Creamos las variables necesarias para el programa*/
	int cont_estudiantes, ciclo;
	
	float sumatoria, calificacion_actual;
	
	char validar[2]; //Nos sirve para saber si hay m�s estudiantes (SI o NO)
	
	/*Inicializamos el contador para los estudiantes*/
	cont_estudiantes = 1;
	sumatoria = 0;
	calificacion_actual = 0;
	ciclo = 1; /*No sabemos el n�mero de estudiantes que hay, esta variable nos ayuda a romper el ciclo cuando ya no hayan m�s*/
	
	/*Creamos el ciclo do-while para la lectura de los estudiantes*/
	do
	{
		/*ENTRADA DE DATOS*/
		printf("\n\nInserte la calificaci�n del %i� alumno ", cont_estudiantes++);
		
		do //Usamos un do-while para verificar que la calificaci�n no sea negativa
		{
			scanf("%f", &calificacion_actual);
			
			if (calificacion_actual < 0)
			{
				printf("\n\nInsert� una calificaci�n NO v�lida, int�ntalo otra vez\n\nCalificaci�n ");
			}
			
		} while (calificacion_actual < 0);
		
		/*PROCESO para determinar el promedio general*/
		sumatoria += calificacion_actual; //Sumatoria total de la calificaci�n de los estudiantes los estudiantes
		
		printf("\n\n�Hay m�s alumnos? (SI o NO) "); //Preguntamos si hay m�s alumnos
		fflush(stdin); //Evitamos la lectura del enter
		gets(validar);
		
		if (strcmp(validar, "no") == 0)
		{
			ciclo = 0; //Si no hay m�s alumnos el ciclo se romper�
		}
		
	} while (ciclo);
	
	/*SALIDA DE DATOS*/
	printf("\n\nEl promedio general es: %.2f", (float)sumatoria/(cont_estudiantes - 1));
	
	getch(); //Esperar un caracter del teclado
	
	return 0;
}

/*
Revisado por: Los compiladores

El programa funciona bien , el codigo es ententible
No se valido para no poder ingresar calificaciones negativas 


*/
