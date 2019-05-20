/* 67. E.P. que lea un arreglo de estructuras los datos de N empleados
de una empresa (clave (num�rica), nombre, edad, salario (real), sexo
(num�rica) y que determine e imprima los datos del empleado con
mayor y menor salario.
Equipo: SacaChispas

Integrantes:
Ricardo Nicol�s Canul Ibarra
Javier Alejandro Chim Cem�

Fecha: 20/marzo/2019
Version: 1.0*/


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() 
{
	/*Declaramos las variables*/
	int numero_empleados;
	float mayor_salario = 0, menor_salario = 0;
	
	/*N�mero de empleados*/
	printf("\nInserte el n�mero de empleados ");
	scanf("%i", &numero_empleados);
	
	/*Declaramos la estructura*/
	struct empleados
	{
		int clave;
		char nombre[20];
		int edad;
		float salario;
		int sexo;
		
	}empleados_totales[numero_empleados];
	
	/*ENTRADA de datos*/
	for(int i = 0; i < numero_empleados; i++)
	{
		system("cls");
		
		printf("\n\nEmpleado %i.-Inserte su clave ", i + 1);
		scanf("%i", &empleados_totales[i].clave);
		
		system("cls");
		
		printf("\n\nEmpleado %i.-Inserte su nombre ", i + 1);
		fflush(stdin);
		gets(empleados_totales[i].nombre);
		
		printf("\n\nEmpleado %i.-Inserte su edad ", i + 1);
		scanf("%i", &empleados_totales[i].edad);
		
		printf("\n\nEmpleado %i.-Inserte su salario ", i + 1);
		scanf("%f", &empleados_totales[i].salario);
		
		/*PROCESO para calcular el mayor y menor salario*/
		if(i == 0)
		{
			menor_salario = empleados_totales[i].salario;
		}
		
		if (empleados_totales[i].salario > mayor_salario)
		{
			mayor_salario = empleados_totales[i].salario;
		}
		
		if (empleados_totales[i].salario < menor_salario)
		{
			menor_salario = empleados_totales[i].salario;
		}
		
		printf("\n\nEmpleado %i.-Inserte su g�nero \n(1. Masculino, 2. Femenino, u otro n�mero si es indefinido) ", i + 1);
		scanf("%i", &empleados_totales[i].sexo);
	}
	
	system("cls");
	
	/*SALIDA de datos*/
	printf("\n\nEMPLEADOS CON MAYOR SALARIO");
	for(int i = 0; i < numero_empleados; i++)
	{
		if(empleados_totales[i].salario == mayor_salario)
		{
			printf("\n\nClave: %i", empleados_totales[i].clave);
			printf("\nNombre: %s", empleados_totales[i].nombre);
			printf("\nEdad: %i", empleados_totales[i].edad);
			printf("\nSalario: %.2f", empleados_totales[i].salario);
			
			if(empleados_totales[i].sexo == 1)
			{
				printf("\nSexo: Masculino");
				
			}else if(empleados_totales[i].sexo == 2)
			{
				printf("\nSexo: Femenino");
				
			}else
			{
				printf("\nSexo: Indefinido");
			}
			
		}
	}
	
	/*SALIDA de datos*/
	printf("\n\nEMPLEADOS CON MENOR SALARIO");
	for(int i = 0; i < numero_empleados; i++)
	{
		if(empleados_totales[i].salario == menor_salario)
		{
			printf("\n\nClave: %i", empleados_totales[i].clave);
			printf("\nNombre: %s", empleados_totales[i].nombre);
			printf("\nEdad: %i", empleados_totales[i].edad);
			printf("\nSalario: %.2f", empleados_totales[i].salario);
			
			if(empleados_totales[i].sexo == 1)
			{
				printf("\nSexo: Masculino");
				
			}else if(empleados_totales[i].sexo == 2)
			{
				printf("\nSexo: Femenino");
				
			}else
			{
				printf("\nSexo: Indefinido");
			}
			
		}
	}
	
	getch();
	
	return 0;
}

/*El programa funciona correctamente, cumple con lo especificado en el ejercicio propuesto
Buen uso de los comentarios, entendible

Revis�: Abigael Arjona

Equipo: Programci�n estructurada

*/



