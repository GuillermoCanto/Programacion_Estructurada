/*42.- E.P. que lea las calificaciones del primer parcial de los
estudiantes de algoritmos y que cuente e imprima cuantos alumnos
obtuvieron calificaci�n mayor a 80.
Fecha: 11/02/2019
Versi�n: 1.0 */
#include <stdio.h>

int main() 
{
	//ENTRADA//
	float calif;
	int CC, May, NoAlum;
	CC=0;
	May=0;
	printf("�Cu�ntos alumnos tienes?: ");
	scanf("%d", &NoAlum);
	//PROCESO//
	do{
		CC=CC+1;
		printf("�Qu� calificaci�n tiene el alumno %d: ",CC);
		scanf("%f", &calif);
		if(calif>80)
		{
		May=May+1;	
		};
		
		
	}
	//SALIDA//
	while (CC!=NoAlum);
	printf("Los alumnos que tuvieron una calificaci�n arriba de 80 fueron: %d ",May);
	return 0;
}
