#include <stdio.h>
/*
Nombre: D�as de los meses.
Autores: 
Dur�n Matos Juan Jos�
Gonz�lez Bautista No� Alejandro
L�pez Madera Fernanda Jacqueline
Descripcion: E.P. que lea el n�mero de un mes (1 a 12) y determine e imprima el
n�mero de d�as de ese mes. (utilizar switch).
Fecha: 06Ene19
Versi�n: 1.0 */
int main(int argc, char *argv[]) {
	int mes, dias;
	printf("Enero=1");
	printf("\nFebrero=2");
	printf("\nMarzo=3");
	printf("\nAbril=4");
	printf("\nMayo=5");
	printf("\nJunio=6");
	printf("\nJulio=7");
	printf("\nAgosto=8");
	printf("\nSeptiembre=9");
	printf("\nOctubre=10");
	printf("\nNoviembre=11");
	printf("\nDiciembre=12");
	
	printf("\n\nIngrese el n�mero del mes que desea saber cu�ntos d�as tiene:");
	scanf("%i",&mes);
	
	switch (mes)
	{
	case 1:
		printf("El mes de Enero tiene 31 d�as");
		break;
	case 2:
		printf("El mes de Febrero tiene 28 d�as");
		break;
	case 3:
		printf("El mes de Marzo tiene 31 d�as");
		break;
	case 4:
		printf("El mes de Abril tiene 30 d�as");
		break;
	case 5:
		printf("El mes de Mayo tiene 31 d�as");
		break;
	case 6:
		printf("El mes de Junio tiene 30 d�as");
		break;
	case 7:
		printf("El mes de Julio tiene 31 d�as");
		break;
	case 8:
		printf("El mes de Agosto tiene 31 d�as");
		break;
	case 9:
		printf("El mes de Septiembre tiene 30 d�as");
		break;
	case 10:
		printf("El mes de Octubre tiene 31 d�as");
		break;
	case 11:
		printf("El mes de Noviembre tiene 30 d�as");
		break;
	case 12:
		printf("El mes de Diciembre tiene 31 d�as");
		break;
	default:
		printf("Selecci�n no v�lida");
		break;
	}
	return 0;
}

/*El programa funciona correctamente. NO tiene el default el switch por si se inserta un n�mero no v�lido

Equipo:
Revis�: Ricardo Nicol�s Canul Ibarra
Fecha: 6/02/2019*/
