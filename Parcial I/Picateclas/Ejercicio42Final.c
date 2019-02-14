/*Nombre Equipo: Picateclas
Autores:
Dur�n Matos Juan Jos�
Gonz�lez Bautista No� Alejandro
L�pez Madera Fernanda Jacqueline
Version: 1.0
Descripcion del programa: Que lea las calificaciones del primer parcial de los
estudiantes de algoritmos y que cuente e imprima cuantos alumnos
obtuvieron calificaci�n mayor a 80.
Fecha de creacion: 8/feb/2019
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	/*VARIABLES*/
	int contEstudiantes = 0;
	int contEstMajor80 = 0;
	int totalEstudiantes;
	float calParcial;
	
	int flag = 0; //Bandera que determina cuando un dato se ingresa correctamente o no
	
	/*ENTRADA*/
	//Aqui se ingresan la cantidad de estudiantes de un grupo a revisar
	printf("Ingrese la cantidad de estudiantes del grupo\n");
	scanf("%d",&totalEstudiantes);
	
	/*PROCESO*/
	/*Aqui se realiza el bucle de asignacion de las calificaciones del parcial de
	cada alumno hasta que ya se hayan ingresado el de todos los alumnos disponibles*/
	do{
		contEstudiantes++;
		flag = 0;
		
		printf("Ingrese la calificaci�n del parcial del alumno %d: ", contEstudiantes);
		while(flag==0){
			scanf("%f", &calParcial);
			if(calParcial>100.0 || calParcial<0.0){ //En caso de ingresar un valor fuera de rango se le pedira al usuario volver a ingresar la calificacion
				printf("\nCalificaci�n no v�lida ingrese solo valores del 0 al 100\n");
			}
			else{
				flag = 1;
		        /*Determina si la calificaci�n ingresada es mayor a 80
		         entonces se incrementar� el contador de alumnos con calificacion 
		         mayores a 80*/
	           	if(calParcial>80.0){ 
			       contEstMajor80++;
	           	}
			}
		}//Termina While de validacion
		
		
	} while(contEstudiantes<totalEstudiantes); //Termina Do-While de asignacion de los alumnos
	
	/*SALIDA*/
	printf("El n�mero de alumnos con calificaci�n mayores a 80 fue de %d", contEstMajor80);
	
	return 0;
}

/*Este problema compil� correctamente, ademas compara si la calificacion esta 
en el rango entre 0 y 100 y te vuelve a pedir otra calificacion.
tiene todo los datos que se solicitaron.

Equipo: SacaChispas
Revis�: Senaida Norely Chan Chan
Fecha: 13/02/2019*/

