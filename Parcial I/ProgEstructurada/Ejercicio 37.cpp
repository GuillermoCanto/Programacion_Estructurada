#include <stdio.h>

/*	Ejercicio: ADA 4, Ejercicio 37.
Descripci�n: E.P.  que  lea  100  n�meros  y que  cuente  e  imprima  cuantos  son positivos.
Fecha: 11 Febrero 2019
Versi�n: 1.0
*/

int main() {
	//Entrada
	float num;
	int cont,nump;
	
	cont = 1;
	nump = 0;
	
	//Proceso
	while(cont <= 10){
		printf("\nIntroduzca un n�mero.");
		scanf ("%f",&num);
		
		if(num >= 0){
			nump++;
		}
		
		cont++;
	}
	
	//Salida
	printf("\nLa cantidad de n�meros positivos es de: %i", nump);
	
	return 0;
}

