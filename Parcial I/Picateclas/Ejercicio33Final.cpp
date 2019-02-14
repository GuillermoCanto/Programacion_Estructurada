/* Programa: N�meros mayores a 100
Descripci�n:  
E.P. que lea 10 n�meros (N) y que determine e imprima los que
sean mayores a 100.
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
	int CN=0;//Contador de numeros
	float num;
	/*PROCESO*/
	while(CN<10){
		/*ENTRADA*/
		printf("\nIntroduzca un n�mero:");
		scanf("%f", &num);
		CN=CN+1;
		if(num>100){//Verifica que sean mayores a 100.
			/*SALIDA*/
			printf("El n�mero %f es mayor que 100\n", num);
		}
	}
	getch();
	return 0;
}

/*El programa funciona correctamente  

Equipo: SacaChispas
Revis�: Javier Alejandro Chim Cem�
Fecha: 13/02/2019*/
