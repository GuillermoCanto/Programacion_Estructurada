/* 49. E.P. que lea las calificaciones de 50 alumnos y que determine e
imprima cuantos tienen calificaci�n mayor al promedio de grupo
Equipo: SacaChispas

Integrantes:
Ricardo Nicol�s Canul Ibarra
Senaida Norely Chan Chan
Javier Alejandro Chim Cem�

Fecha: 13/feb/2019
Version: 1.0*/

#include <stdio.h>
#include <conio.h>

int main() {
	
	/*Creamos las variables necesarias para el programa*/
	int cont_alumnos, cont_mayor_promedio;
	
	float calificacion_actual, sumador_calificaciones, promedio;
	
	/*Inicializamos el contador para los alumnos*/
	cont_alumnos = 1;
	cont_mayor_promedio = 0;
	
	calificacion_actual = 0;
	sumador_calificaciones = 0;
	promedio = 0;
	
	/*Creamos el ciclo for para la primera lectura de los 50 alumnos, como NO podemos usar arrays,
	necesitamos hacer 2 lecturas*/
	
	for (cont_alumnos = 1; cont_alumnos <= 50; cont_alumnos++)
	{
		/*PRIMERA ENTRADA DE DATOS*/
		printf("\n\nInserte la calificaci�n del %i� alumno ", cont_alumnos);
		
		do //Usamos un Do-While para validar las calificaciones
		{
			scanf("%f", &calificacion_actual);
			
			if(calificacion_actual < 0 && calificacion_actual > 100)
			{
				printf("Insert� una calificaci�n NO v�lida, Int�ntelo de nuevo\n\nCalificaci�n ");
			}
			
		} while (calificacion_actual < 0 && calificacion_actual > 100);
		
		sumador_calificaciones += calificacion_actual;
	}
	
	promedio = (float)sumador_calificaciones/50;
	
	/*Creamos el ciclo for para la segunda lectura con el promedio calculado*/
	for (cont_alumnos = 1; cont_alumnos <= 50; cont_alumnos++)
	{
		/*SEGUNDA ENTRADA DE DATOS*/
		printf("\n\nInserte la calificaci�n del %i� alumno ", cont_alumnos);
		
		do //Usamos un Do-While para validar las calificaciones
		{
			scanf("%f", &calificacion_actual);
			
			if(calificacion_actual < 0 && calificacion_actual > 100)
			{
				printf("Insert� una calificaci�n NO v�lida, Int�ntelo de nuevo\n\nCalificaci�n ");
			}
			
		} while (calificacion_actual < 0 && calificacion_actual > 100);
		
		/*PROCESO para saber cu�ntas calificaciones son mayores al promedio*/
		if (calificacion_actual > promedio)
		{
			cont_mayor_promedio++;
		}
	}
	
	/*SALIDA DE DATOS*/
	printf("\n\nLa cantidad de alumnos mayores al promedio es: %i", cont_mayor_promedio);
	
	getch(); //Esperar un caracter del teclado
	
	return 0;
}
/* Calific�: Punto C
-Seg�n el problemario corregido este deberia ser el problema n�mero 47 
-El programa funciona correctamente, al ingresar 50 calificaciones al azar 
arroja la cantidad correcta de alumnos con calificacion mayor al promedio
-Valida correctamente que la calificacion este dentro del rango requerido
-Ser�a bueno que se imprimiera el promedio antes de pasar al "for" para encontrar a
quienes tienen el promedio mayor o que algo indicara que se inici� el segundo ciclo*/
