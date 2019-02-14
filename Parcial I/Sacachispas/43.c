/* 43.- E.P. que lea 250 n�meros y que determine e imprima cu�ntos
son positivos y cu�ntos son negativos

Equipo: SacaChispas

Integrantes:
Ricardo Nicol�s Canul Ibarra
Senaida Norely Chan Chan
Javier Alejandro Chim Cem�
Fecha: 7/feb/2019
Version: 1.0 */

#include <stdio.h>
#include <conio.h>

int main() {
	
	/*Creamos las variables necesarias para el programa*/
	int cont_numeros, cont_positivos, cont_negativos;
	
	float numero_actual;
	
	/*Inicializamos el contador para los n�meros*/
	cont_numeros = 1;
	cont_positivos = 0;
	cont_negativos = 0;
	
	/*Creamos el ciclo do-while para la lectura de los 100 n�meros*/
	do
	{
		/*ENTRADA DE DATOS*/
		printf("\n\nInserte el %i� n�mero ", cont_numeros++);
		scanf("%f", &numero_actual);
		
		/*PROCESO para determinar si el n�mero insertado es positivo o negativo*/
		if (numero_actual > 0)
		{
			cont_positivos++;
			
		} else if (numero_actual < 0)
		{
			cont_negativos++;
		}
		
	} while (cont_numeros <= 250);
	
	/*SALIDA DE DATOS*/
	/*Mostramos los n�meros positivos*/
	printf("\n\nEl n�mero total de positivos es: %i", cont_positivos);
	
	/*Mostramos los n�meros negativos*/
	printf("\n\nEl n�mero total de negativos es: %i", cont_negativos);
	
	
	getch(); //Esperar un caracter del teclado
	
	return 0;
}
/*
Revisado por: Los compiladores

El programa termina cuando se ingresa un n�mero con punto decimal.
El codigo es entendible.

*/
