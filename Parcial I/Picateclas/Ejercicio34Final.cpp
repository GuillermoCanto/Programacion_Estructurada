/* Programa: Imprimir 100 n�meros.
Descripci�n: 
E.P. que lea 100 n�meros (N) y que los imprima.
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
	int CN=0;
	float num;
	/*PROCESO*/
	while(CN<100){
		/*ENTRADA*/
		printf("\nIntroduzca un n�mero:");
		scanf("%f", &num);
		CN=CN+1;
		/*SALIDA*/
		printf("%f\n", num);
	}
	/*SALIDA*/
	
	getch();
	return 0;
}

/*El programa funciona correctamente

Equipo: SacaChispas
Revis�: Javier Alejandro Chim Cem�
Fecha: 13/02/2019*/
