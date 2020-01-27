/*Nombre del programa: Memorira suficiente	
Descripci�n: 69. Pedir al usuario el n�mero de elementos para un arreglo de
n�meros enteros, posteriormente comprobar con malloc si hay
memoria suficiente (si el puntero es v�lido, es decir diferente de
NULL), si la hay, entonces leer y luego imprimir dicho arreglo; si no,
indicar un error en la asignaci�n de memoria.
Autor: Equipo "Sacachispas"
Versi�n: 1.0
Fecha: 30/03/2019*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	//Desclaraci�n de variables
	
	int i, n, *numeros;
	
	//Entrada
	
	printf("Ingrese la cantidad de n�meros deseado: ");
	scanf("%i", &n);
	
	//Proceso
	
	numeros = malloc(n * sizeof(int));
	
	if(numeros == NULL){
		system("cls");
		printf("Error en la asignaci�n de memoria");
		return -1;
	}
	else{
		system("cls");
		printf("Ingrese los valores \n\n");
		
		for(i=0; i<n; i++){
			printf("%i� elemento: ", i+1);
			scanf("%i", &numeros[i]);
			system("cls");
		}
		
		//Salida
		
		printf("Elementos ingresados \n");
		
		for(i=0; i<n; i++){
			printf("%i� elemento: %i \n", i+1, numeros[i]);
		}
	}
	
	return 0;
}

