/* 69. Pedir al usuario el n�mero de elementos para un arreglo de
n�meros enteros, posteriormente comprobar con malloc si hay
memoria suficiente (si el puntero es v�lido, es decir diferente de
NULL), si la hay, entonces leer y luego imprimir dicho arreglo; si no,
indicar un error en la asignaci�n de memoria.
Equipo: SacaChispas

Integrantes:
Ricardo Nicol�s Canul Ibarra
Javier Alejandro Chim Cem�

Fecha: 20/marzo/2019
Version: 1.0*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h.h>

int main() 
{
	/*Declaramos las variables*/
	int n, *vector;
	
	/*N�mero de elementos*/
	printf("\n�Cu�ntos elementos insertar�? ");
	scanf("%i", &n);
	
	/*Reservar memoria para el vector*/
	vector = malloc(n * sizeof(int));
	
	/*Memoria suficiente*/
	if (vector == NULL)
	{
		printf("\n\nNo hay memoria sificiente");
		
		return -1;
		
	}else
	{
		/*ENTRADA de datos*/
		for(int i = 0; i < n; i++)
		{
			printf("\nElemento N� %i ", i + 1);
			scanf("%i", &vector[i]);
		}
		
		system("cls");
		
		/*SALIDA de datos*/
		printf("\n\nLos elemnetos son:\n\n");
		for(int i = 0; i < n; i++)
		{
			printf("[%i] ", vector[i]);
		}
		
	}
	
	getch();
	
	return 0;
}

/*El programa funciona correctamente, cumple con lo especificado en el ejercicio propuesto
Buen uso de los comentarios, el c�digo sencillo y entendible. 

Revis�: Abigael Arjona

Equipo: Programci�n estructurada

*/
