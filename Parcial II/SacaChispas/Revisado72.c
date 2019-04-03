/* 72. E.P. que cree un archivo de texto (.txt) llamado "Grupo2_LIS para
almacenar los datos de los alumnos de Programaci�n Estructurada y
que contenga el siguiente men� de opciones:
1. Crear (nombre, Parcial1, Parcial2, Proyecto, calcular y guardar el
promedio final)
2. Agregar m�s contactos (nombre, Parcial1, Parcial 2, Proyecto,
calcular y guardar el promedio final).
3. Visualizar toda la informaci�n existente en la pantalla.
Equipo: SacaChispas

Integrantes:
Ricardo Nicol�s Canul Ibarra
Javier Alejandro Chim Cem�

Fecha: 20/marzo/2019
Version: 1.0*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

/*Cambia la direcci�n antes de revisar*/
#define DIRECCION char direccion[] = "C:\\ArchivosC\\Grupo2_LIS.txt";

/*Prototipo de funciones*/
void crear();
void anadir();
void visualizar();

FILE *fd;

/*Estructura con los datos de los alumnos*/
struct datos_alumno
{
	char nombre[40];
	float parcial1;
	float parcial2;  
	float proyecto;
	float promedio;
	
}datos;

int main() 
{
	/*Declaramos las variables*/
	int opcion, salida = 0;
	char resp[2];
	DIRECCION
	
	/*Abrir el archivo para actualizarlo*/
	fd = fopen(direccion, "at");
	
	/*Si no se encuentra*/
	if(fd == NULL)
	{
		printf("\nNo se puede crear el archivo ");
		
		getch();
		
	}else
	{
		do
		{
			salida = 0;
			
			/*MEN�*/
			printf("\n1.-Crear\n2.-A�adir\n3.-Visulizar informaci�n guardada ");
			printf("\n\nSeleccione una opci�n ");
			scanf("%i", &opcion);
			
			switch(opcion)
			{
				
			case 1:
				
				crear();
				
				break;
				
			case 2:
				
				crear();
				
				break;
				
			case 3:
				
				visualizar();
				
				break;
				
			default:
				
				printf("\nInsert� una opci�n NO v�lida");
				
				break;
				
			}
			
			printf("\n\n�Desea realizar otra acci�n? (SI o NO) ");
			fflush(stdin);
			gets(resp);
			
			strlwr(resp);
			
			if(strcmp(resp, "no") == 0)
			{
				salida = 1;
			}
			
			system("cls");
			
		}while(salida == 0);
		
	}
	
	printf("Regresa, te extra�o!");
	
	getch();
	
	return 0;
}

void crear()
{
	DIRECCION
	char respuesta[2];
	int validar = 0;
	
	fd = fopen(direccion, "at");
	
	/*ENTRADA  de datos*/
	do
	{
		system("cls");
		
		printf("\nNombre: ");
		fflush(stdin);
		gets(datos.nombre);
		
		printf("\nCalificaci�n del parcial 1: ");
		scanf("%f", &datos.parcial1);
		
		printf("\nCalificaci�n del parcial 2: ");
		scanf("%f", &datos.parcial2);
		
		printf("\nCalificaci�n del proyecto final: ");
		scanf("%f", &datos.proyecto);
		
		datos.promedio = (float)(datos.parcial1 + datos.parcial2 + datos.proyecto)/3;
		
		
		
		printf("\n\nAlumno a�adido con �xito");
		
		/*Escribir los datos en el archivo*/
		fprintf(fd, "\n\nNombre: ");
		fwrite(datos.nombre, 1, strlen(datos.nombre), fd);
		
		fprintf(fd, "\nParcial 1: %.2f", datos.parcial1);
		//fwrite(&datos.parcial1, sizeof(datos_alumno), 1, fd);
		
		fprintf(fd, "\nParcial 2: %.2f", datos.parcial2);
		//fwrite(datos.parcial2, 1, 4, fd);
		
		fprintf(fd, "\nProyecto: %.2f", datos.proyecto);
		//fwrite(datos.proyecto, 1, 4, fd);
		
		fprintf(fd, "\nPromedio: %.2f", datos.promedio);
		//fwrite(datos.promedio, 1, 4, fd);
		
		fflush(fd);
		
		printf("\n\n�Desea a�adir otro perfil? (SI o NO) ");
		fflush(stdin);
		gets(respuesta);
		
		strlwr(respuesta);
		
		if(strcmp(respuesta, "no") == 0)
		{
			validar = 1;
		}
		
	}while (validar == 0);
	

}

void visualizar()
{
	int c;
	DIRECCION
	
	fd = fopen(direccion, "rt");
	
	system("cls");
	
	if(fd == NULL)
	{
		printf("\n\nError al tratar de leer el archivo");
		
	} else
	{
		/*SALIDA de datos*/
		while((c = fgetc(fd)) != EOF)
		{
			if(c == '\n')
			{
				printf("\n");
				
			}else
			{
				putchar(c);
			}
		}
		
		fclose(fd);
	}
	
}

/*El programa funciona correctamente, cumple con lo que ped�a el ejercicio propuesto
El archivo se genera de manera correcta y sin problemas al ejecutarlo

Buen uso de los comentarios, el c�digo es entendible.

Revis�: Abigael Arjona

Equipo: Programci�n estructurada

*/
