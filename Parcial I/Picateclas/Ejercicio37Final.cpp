/* Programa: ContadorDePositivos.C
Descripci�n: Lee 100 n�meros y cuenta e imprime cu�ntos son positivos.
Autor: Picateclas
Integrantes:
- L�pez Madera Fernanda Jacqueline
- Dur�n Matos Juan Jos�
- Gonz�lez Bautista No� Alejandro
Versi�n: 1.0
Fecha: 12/feb/2019 */

#include <stdio.h>
#include <conio.h>

int main(void) {
	/*VARIABLES*/
	int c_general, c_positivos;
	float num;
	c_general=0;
	c_positivos=0;
	
	/*ENTRADA*/
	while(c_general<100){
		c_general=c_general+1;
		printf("\nIngrese el %i", c_general);
		printf("� n�mero: ");
		scanf("%f", &num);
		
		/*PROCESO*/
		if(num>0){
			c_positivos=c_positivos+1;
		}
	}
	
	/*SALIDA*/
	printf("\n\nHay %i", c_positivos);
	printf(" n�meros positivos.");
	getch();
	return 0;
}

/*El programa funciona correctamente, separar un poco el c�digo para que se entienda mejor

Equipo: SacaChispas
Revis�: Ricardo Nicol�s Canul Ibarra
Fecha: 13/02/2019*/

