/* Programa: TiendasConUtilidad2000000Mensual.C
Descripci�n: Lee las utilidades mensuales de una cadena de 5 tiendas
y determina e imprime cu�ntas tiendas tuvieron utilidades mayor a $ 2,000,000
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
	int c_general, c_tiendas;
	float utilidad;
	c_general=0;
	c_tiendas=0;
	
	/*ENTRADA*/
	while(c_general<5){
		c_general=c_general+1;
		printf("\nTienda %i", c_general);
		printf("\nIngrese las utilidades: $");
		scanf("%f", &utilidad);
		
		/*PROCESO*/
		if(utilidad>2000000){
			c_tiendas=c_tiendas+1;
		}
	}
	
	/*SALIDA*/
	printf("\nTiendas con utilidad mayor a $2,000,000: %i", c_tiendas);
	getch();
	return 0;
}

/*El programa funciona correctamente, separar el c�digo para que sea m�s f�cil entenderlo.

Equipo: SacaChispas
Revis�: Ricardo Nicol�s Canul Ibarra
Fecha: 13/02/2019*/

