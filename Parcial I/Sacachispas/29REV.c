/* E.P. que lea el n�mero de un mes (1 a 12) y determine e imprima el n�mero de d�as de ese mes. (utilizar switch)

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
	int mes;
	
	/*Pedimos la entrada*/
	printf("\nInserte el n�mero del mes ");
	scanf("%i", &mes); //Leemos el n�mero del mes
	
	switch (mes) //Evaluamos dicho n�mero en el switch
	{
		
	case 1: printf("\nEl mes de enero tiene 31 d�as"); //Salida seg�n el n�mero del mes
		break;
			
	case 2: printf("\nEl mes de febrero tiene 28 d�as");
		break;
			
	case 3: printf("\nEl mes de marzo tiene 31 d�as");
		break;
			
	case 4: printf("\nEl mes de abril tiene 30 d�as");
		break;
			
	case 5: printf("\nEl mes de mayo tiene 31 d�as");
		break;
			
	case 6: printf("\nEl mes de junio tiene 30 d�as");
		break;
			
	case 7: printf("\nEl mes de junio tiene 31 d�as");
		break;
			
	case 8: printf("\nEl mes de agosto tiene 31 d�as");
		break;
			
	case 9: printf("\nEl mes de septiembre tiene 30 d�as");
		break;
			
	case 10: printf("\nEl mes de octubre tiene 31 d�as");
		break;
			
	case 11: printf("\nEl mes de noviembre tiene 30 d�as");
		break;
			
	case 12: printf("\nEl mes de diciembre tiene 31 d�as");
		break;
			
	default: printf("\nEl n�mero que insert� no es v�lido"); //El n�mero del mes no fue v�lido
		break;
		
	}
	
	getch();
	
	return 0;
}//El mes de Julio lo tienen puesto como junio, corregir s�lo ese mes. En la informaci�n falt� poner nombre del programa y aurores. Revisado 
