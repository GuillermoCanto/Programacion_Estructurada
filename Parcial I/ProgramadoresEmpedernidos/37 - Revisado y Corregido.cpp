//Codigo que lee n�meros e imprime cu�ntos son positivos
//Fecha: 10/02/19
//Autor: Programadores Empedernidos.
//Version: 2.0.
//Nombre: 37.c
#include <stdio.h>

int main(){
//	Declaracion e inicializacion de variables.

	int contador, numero, positivos;
	contador=1;
	positivos=0;

//	Estructura Do - While para leer los n�meros. 
	do{
		printf("N\243mero #%d. ", contador);
		//Entrada
		printf("Digita un n\243mero\n");
		scanf("%d", &numero);
		
//	If para contar los numeros positivos. (proceso)
		if (numero>0){
			positivos=positivos+1;
		}
		fflush(stdin);
		contador++;
	}
	while(contador <= 100);
	
// Salida
	printf("Has ingresado %d numeros positivos", positivos);
	return 0;
}


/*
El programa funciona correctamente. S�lo me llama la atenci�n que consideraran el 0 como un n�mero positivo dado que el 0 es neutro.
Por otra parte, ser�a bueno incluir el contador para indicar en qu� n�mero de los 100 a leer nos encontramos. Estos detalles, aunque 
no perjudican el funcionamiento del programa, son recomendaciones para mayor claridad.
Revis�: Picateclas
*/
