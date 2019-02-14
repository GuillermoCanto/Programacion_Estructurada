/* Programa: N�meros iguales a 0
Descripci�n: 
E.P. que lea 25 n�meros (N) y que imprima los que sean iguales a
cero.
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
	do{
		/*ENTRADA*/
		printf("\nIntroduzca un n�mero:");
		scanf("%f", &num);
		CN=CN+1;
		if(num==0){//Verifica que el n�mero sea igual que 0.
			/*SALIDA*/
			printf("El n�mero en la posici�n %i es igual a 0\n", CN);
		}
	} while(CN<25);
	
	getch();
	return 0;
}

/*El programa funciona correctamente

Equipo: SacaChispas
Revis�: Javier Alejandro Chim Cem�
Fecha: 13/02/2019*/
