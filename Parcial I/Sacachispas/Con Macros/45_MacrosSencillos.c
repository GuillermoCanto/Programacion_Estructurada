/* 45. Una Compa��a efect�a c�lculos para su reporte anual de utilidades
y a�adir� un peque�o incentivo de antig�edad para sus empleados
que consiste en un porcentaje de su sueldo, de acuerdo a una tabla.
Equipo: SacaChispas

Integrantes:
Ricardo Nicol�s Canul Ibarra
Senaida Norely Chan Chan
Javier Alejandro Chim Cem�

Fecha: 13/feb/2019
Version: 1.0 (Usando macros sencillos)*/

#include <stdio.h>
#include <conio.h>

#define EMPLEADOS 100
#define PORCIENTO1 1.01
#define PORCIENTO3 1.03
#define PORCIENTO5 1.05
#define PORCIENTO7 1.07

int main() {
	
	/*Creamos las variables necesarias para el programa*/
	int cont_empleados, antiguedad;
	
	float salario;
	
	/*Inicializamos el contador para los empleados*/
	cont_empleados = 1;
	
	antiguedad = 0;
	salario = 0;
	
	/*Creamos el ciclo for para la lectura de los 100 empleados*/
	
	for (cont_empleados = 1; cont_empleados <= EMPLEADOS; cont_empleados++)
	{
		/*ENTRADA DE DATOS (salario)*/
		printf("\n\nInserte el salario del empleado %i� $", cont_empleados);
		
		do //Usamos un do-while para verificar que el salario no sea negativo
		{
			scanf("%f", &salario);
			
			if (salario < 0)
			{
				printf("\n\nInsert� un salario NO v�lido, int�ntalo otra vez\n\nSalario ");
			}
			
		} while (salario < 0);
		
		/*ENTRADA DE DATOS (antig�edad)*/
		printf("\n\nInserte la antig�edad del empleado %i� ", cont_empleados);
		
		do //Usamos un do-while para verificar que la antig�edad no sea negativa
		{
			scanf("%i", &antiguedad);
			
			if (antiguedad < 0)
			{
				printf("\n\nInsert� una cantidad NO v�lida, int�ntalo otra vez\n\nAntig�edad ");
			}
			
		} while (antiguedad < 0);
		
		/*PROCESO para determinar el salario seg�n la antig�edad*/
		if (antiguedad >= 1 && antiguedad <= 3)
		{
			salario *= PORCIENTO1;
			
		} else if (antiguedad >= 4 && antiguedad <= 6)
		{
			salario *= PORCIENTO3;
			
		} else if (antiguedad >= 7 && antiguedad <= 9)
		{
			salario *= PORCIENTO5;
			
		} else if (antiguedad >= 10 && antiguedad <= 15)
		{
			salario *= PORCIENTO7;
		}
		
		/*SALIDA DE DATOS*/
		printf("\n\nSu salario es: $%.2f", salario);
		
	}

	getch(); //Esperar un caracter del teclado
	
	return 0;
}

/* Calific�: Punto C
-El problema pide leer el nombre del empleado, pero el codigo no lo hace 
-El programa funciona correctamente, como ejemplo:Si colocamos un salario de 500 con una antoguedad de 6 a�osel 
programa arroja 515 pesos.
-Buena idea al colocar el ($), hace que quede m�s elegante 
-Me parecee bien que el programa valide si el salario es menor a cero, pero
acepta como sueldo al n�mero 0*
-Es correcto el macro al almacenar la cantidad a multiplicar y no altera la logica del problema 
