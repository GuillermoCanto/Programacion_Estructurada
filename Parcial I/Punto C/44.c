/*4.- Los estudiantes de Ingenier�a presentaron un examen de
admisi�n con 100 preguntas. E.P. que lea el nombre y el n�mero de
respuestas correctas para cada una de las 50 personas que
presentaron y que determine e imprima para cada uno su nombre y su
calificaci�n basados en la siguiente tabla:
Respuestas Correctas Calificaci�n Obtenida
30 > R <= 50 50
50 > R <= 60 60
60 > R <= 65 70
65 > R <= 75 80
75 > R <= 90 90
R > 90 100*/
/*Fecha: 11/02/2019
	Versi�n: 1.0 */
#include <stdio.h>

int main() 
{
	//ENTRADA//
	char nombre[20];
	int NRC, CC, calif;
	CC=0;
	do{
		
		CC=CC+1;
		printf("\n\n �Cu�l es tu nombre?: ");
		scanf("%s", &nombre);
		printf("\n �Cu�ntas respuestas correctas obtuviste?: ");
		scanf("%d", &NRC);
		//PROCESO//
		if(NRC>30&& NRC<=50)
		{
			calif=50;
		} else {
			if (NRC<=60)
			{
				calif=60;	
			} else {
				if (NRC<=65)
				{
					calif=70;
				} else {
					if (NRC<=75)
					{
						calif=80;
					} else{
						if(NRC<=90)
						{
							calif=90;
						} else
						   calif=100;
					}
				}
			}
		}
		//SALIDA//
		printf("\n %d-Nombre: %s",CC, nombre);
		printf("\n Calificaci�n: %d", calif);
	} while(CC!=50);
	
	
	
	return 0;
}
