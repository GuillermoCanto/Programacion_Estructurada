/* E.P. que determine e imprima si el car�cter c�digo asociado a un 
c�digo introducido por teclado, corresponde a un car�cter 
alfab�tico, d�gito, de puntuaci�n, especial o no imprimible.

Elaborado por:
Ricardo Nicol�s Canul Ibarra
Senaida Norely Chan Chan
Javier Alejandro Chim Cem�

Fecha: 31/ene/2019
Version: 1.0 */

#include <stdio.h>
#include <conio.h>

int main() {
	
	/*Declaramos las variables necesarias para el programa*/
	char caracter;
	
	/*Entrada del dato (se procesar� dicho caracter dependiendo de su c�digo ASCII))*/
	printf("\nInserte un caracter del teclado ");
	scanf("%c", &caracter);
	
	/*Proceso para determinar cu�l tipo de caracter es dependiendo de su c�digo ASCII*/
	if (caracter >= 48 && caracter <= 57)
	{
		printf("\nInsert� un n�mero"); //Mostramos la salida correspodiente
		
	} else if ((caracter >= 65 && caracter <= 90) || (caracter >= 97 && caracter <= 122)) 
	{
		printf("\nInsert� un caracter alfeb�tico"); //Mostramos la salida correspodiente
		
	} else if ((caracter >= 32 && caracter <= 34) || (caracter >= 44 && caracter <= 46) || (caracter >= 58 && caracter <= 59))
	{
		printf("\nInsert� un caracter de puntuaci�n"); //Mostramos la salida correspodiente
		
	} else if (caracter >= 32 || caracter <= 254) 
	{
		printf("\nInsert� un caracter especial"); //Mostramos la salida correspodiente
		
	} else 
	{
		printf("\nInsert� un caracter no imprimible"); //Mostramos la salida correspodiente
	}
	
	getch(); //Esperamos un caracter del teclado
	
	return 0;
}//En la informaci�n falt� poner nombre del programa y aurores.Revisado
