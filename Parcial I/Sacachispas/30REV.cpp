/* E.P. que lea un n�mero entero obtenido al lanzar un dado de seis caras e imprimir 
el n�mero en letras de la cara opuesta. En las caras opuestas de un dado de seis caras est�n los n�meros: 1-6, 2-5 y 3-4. 
Si el n�mero del dado capturado es menor que 1 o mayor que 6, se mostrar�: �Un DADO no tiene ese n�mero�. (utilizar switch)

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
	int num_dado;
	
	/*Pedimos la entrada*/
	printf("\nInsert� el n�mero del dado ");
	scanf("%i", &num_dado); //Leemos el n�mero del dado
	
	switch(num_dado) //Evaluamos dicho n�mero en el switch
	{
	case 1: printf("\nLa cara opuesta es seis"); //Salida seg�n el n�mero del dado
		break;
		
	case 2: printf("\nLa cara opuesta es cinco");
		break;
		
	case 3: printf("\nLa cara opuesta es cuatro");
		break;
		
	case 4: printf("\nLa cara opuesta es tres");
		break;
		
	case 5: printf("\nLa cara opuesta es dos");
		break;
		
	case 6: printf("\nLa cara opuesta es uno");
		break;
		
	default: printf("\nUn DADO no tiene ese n�mero"); //El n�mero del dado no fue v�lido
 
	}
	
	getch(); //Esperamos un caracter del teclado
	
	return 0;
}

/*El programa funciona correctamente, sin embargo no resuelve el problema propuesto: la salida imprime el n�mero DE letras 
del n�mero en la cara opuesta, pero lo que se deb�a imprimir es el n�mero EN letras de la cara opuesta.
As�, si el n�mero obtenido era 1, la salida debi� ser "La cara opuesta es seis".
El c�digo est� bien dividido en secciones, pero no tiene los nombres de autores en el encabezado.*/
