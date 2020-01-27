/*Nombre del programa: Reservar y liberar memoria
Descripci�n: 71. E.P. que utilice un apuntador de arreglo con datos de tipo float,
pedir el usuario el n�mero de elementos, luego reservar memoria
din�mica con calloc, leer dicho arreglo y posteriormente, imprimir
todos sus elementos; por ultimo, liberar el espacio de memoria
din�mica utilizado.
Autor: Equipo "Sacachispas"
Versi�n: 1.0
Fecha: 30/03/2019*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	//Desclaraci�n de variables
	
	int i, n;
	float *numeros;
	
	//Entrada
	
	printf("Ingrese la cantidad de n�meros deseado: ");
	scanf("%i", &n);
	
	//Proceso 
	
	numeros = calloc(n, sizeof(float));
	
	system("cls");
	printf("Ingrese los valores \n\n");
	
	for(i=0; i<n; i++){
		printf("%i� elemento: ", i+1);
		scanf("%f", &numeros[i]);
		system("cls");
	}
	
	//Salida
	
	printf("Elementos ingresados \n");
		
	for(i=0; i<n; i++){
		printf("%i� elemento: %.1f \n", i+1, numeros[i]);
	}
	
	//Liberaci�n de memoria del puntero
	
	free(numeros);
	
	return 0;
}
