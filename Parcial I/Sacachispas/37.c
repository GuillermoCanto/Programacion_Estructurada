/* 37. E.P. que lea 100 n�meros y que cuente e imprima cuantos son
positivos.
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
	int cont_numeros, cont_positivos;
	float numero_actual;
	
	/*Inicializamos el contador para los n�meros*/
	cont_numeros = 1;
	cont_positivos = 0;
	
	/*Creamos el ciclo while para la lectura de los 100 n�meros*/
	while (cont_numeros <= 100)
	{
		/*ENTRADA DE DATOS*/
		printf("\n\nInserte el %i� n�mero ", cont_numeros++);
		scanf("%f", &numero_actual);
		
		/*PROCESO para determinar si el n�mero insertado es positivo*/
		if (numero_actual > 0)
		{
			printf("\n\nEste n�mero es positivo");
			
			cont_positivos++;
		}
	}
	
	/*SALIDA DE DATOS*/
	printf("\n\nEl n�mero total de positivos es: %i", cont_positivos);
	
	
	getch(); //Esperar un caracter del teclado
	
	return 0;
}
/*Revisado por: Compiladores_ Jafet Fernandez_Carlos Alvarez 
Al usar un floatante se atora y falla
En general bien*/

