#include <stdio.h> 
#include <conio.h>
#include <math.h>

/*Ejercicio 37: c�antos n�meros positivos (while) 
Descripci�n: E.P. que lea 100 n�meros y que cuente e imprima cuantos son
positivos. 
Fecha: 11/02/2019
Versi�n: 1.0 */

int main () 
{
    //declaraci�n de variables 
	float n ; 
	int cont, positivos ;
	cont=0;
	positivos=0;
	
	//Entrada 
	while (cont<3) 
	{
		cont=cont+1; 
		printf ("\n Dame el numero %d:  ", cont ) ;
		scanf ("%f",&n) ;
		
		//proceso
		if (n>=0) {
			positivos=positivos+1;
		}
	}
	
	//Salida
	printf ("\n La  cantidad de numeros positivos es : %d ", positivos ) ;  
	getch (); 
	return 0 ; 
}

/*
-El codigo cumple su funci�n
-Hay partes del codigo que se pueden reducir usando otros operadores ejemplo, el ++ (incremento)
-Es legible y entendible.
-Revis�: Programadores Empedernidos
-Fecha: 13 de febrero del 2019
*/
