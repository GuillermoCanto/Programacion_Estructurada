/* Programa: N�meros negativos.
Descripci�n: 
E.P. que lea 50 n�meros y que cuente e imprima cuantos son
negativos.
Autor: Picateclas
Integrantes:
- L�pez Madera Fernanda Jacqueline
- Dur�n Matos Juan Jos�
- Gonz�lez Bautista No� Alejandro
Versi�n: 1.0
Fecha: 12/feb/2019 */

#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[]) {
	/*VARIABLES*/
	int ContNeg=0, ContNum=0;
	float num;
	
	/*PROCESO*/
	do{
		/*ENTRADA*/
		ContNum++;
		printf("\nIntroduzca un n�mero:");
		scanf("%f", &num);
		
		//Verifica que sea negativo.
		if(num<0){ 
			ContNeg++;
		}
	} while(ContNum<50);
	
	/*SALIDA*/
	printf("\nLa cantidad de n�meros negativos introducidos son: %i", ContNeg);
	
	getch();
	return 0;
}

/*El programa funciona correctamente, separar un poco el c�digo para que se entienda mejor
Las variables pueden confunden un poco con su funci�n.

Equipo: SacaChispas
Revis�: Javier Alejandro Chim Cem�
Fecha: 13/02/2019*/

