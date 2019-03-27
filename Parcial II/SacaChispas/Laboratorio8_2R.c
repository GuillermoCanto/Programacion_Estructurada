/* II. E.P. que lea un vector de 20 elementos que sean enteros y determine
e imprima la suma de los elementos pares y el producto de los elementos impares.
Equipo: SacaChispas

Integrantes:
Ricardo Nicol�s Canul Ibarra
Javier Alejandro Chim Cem�

Fecha: 7/marzo/2019
Version: 1.0*/

#include <stdio.h>
#include <conio.h>

int main() {
	
	/*Declaramos las variables y el vector*/
	int num[20], i, sum = 0, multi = 1, cont_multi = 0;

	/*Creamos un ciclo For para la lectura de los datos*/
	for (i = 0; i < 20; i++)
	{
		/*ENTRADA de datos*/
		printf("\n\nIngrese el n�mero en la posici�n %i: " , i+1);
		scanf("%i", &num[i]);
		
		/*PROCESO*/
		/*Usamos la funci�n MOD para determinar si el n�mero es par*/
		if (num[i] % 2 == 0)
		{
			sum += num[i];
		}
		else 
		{
			multi *= num[i];
			
			cont_multi++;
		}
	}
	
	/*Si no hay n�meros impares, la multiplicaci�n debe ser 0*/
	if (cont_multi == 0)
	{
		multi = 0;
	}
	
	/*SALIDA de datos*/
	printf("\n\nLa suma de los n�meros pares es: %i", sum);
	
	printf("\n\nLa multiplicaci�n de los n�meros impares es: %i", multi);
	
	getch();
	
	return 0;
}
/*Funciona correctamente para todos los valores
Revisado por: Punto C(Erick C�rdenas)*/
/*Entrada: 1,1,1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,2,2 (10 unos y 10 dos)
salida: la suma es 20 y la multiplicacion es 1*/
