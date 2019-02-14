/* 33 E.P. que lea 10 n�meros (N) y que determine e imprima los que
sean mayores a 100.
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
	int cont_numeros;
	float numero_actual;
	
	/*Inicializamos el contador para los n�meros*/
	cont_numeros = 1;
	
	/*Creamos el ciclo while para la lectura de los 10 n�meros*/
	while (cont_numeros <= 10)
	{
		/*ENTRADA DE DATOS*/
		printf("\n\nInserte el %i� n�mero ", cont_numeros++);
		scanf("%f", &numero_actual);
		
		/*PROCESO para determinar si el n�mero insertado es mayor que 100*/
		if (numero_actual > 100)
		{
			/*SALIDA*/
			printf("\n\nEste n�mero es mayor que 100");
		}
	}
	
	getch(); //Esperar un caracter del teclado
	
	return 0;
}

/*Revisado por: Compiladores_ Jafet Fernandez
Al usar un floatante se atora y falla
En general bien*/
