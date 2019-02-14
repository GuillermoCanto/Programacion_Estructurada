/* Un vendedor tiene un sueldo base por d�a de 200 pesos y recibe una comisi�n por venta, 
que se determina considerando lo siguiente: 
a) Para sus ventas de lunes a viernes, la comisi�n de venta es el 2.5% del monto total de sus ventas. 
b) Para sus ventas de s�bado, la comisi�n es del 4%. 
c) Para sus ventas de domingo, la comisi�n es del 5%.

Adem�s, si el monto de sus ventas en un d�a es mayor a $10,000.00 tiene un bono adicional de 200 pesos. 
E.P. que lea las ventas de un d�a, calcule e imprima el ingreso total del vendedor.

Elaborado por:
Ricardo Nicol�s Canul Ibarra
Senaida Norely Chan Chan
Javier Alejandro Chim Cem�

Fecha: 31/ene/2019
Version: 1.0rev

Revisado por: Equipo Picateclas
Observaciones:  El programa cumple con los requisitos dados no obstante el bono de $200 se da cuando se obtienen $10000
pero no iniciales sino ya descontados con el porcentaje, esto es solo mi punto de vista, buen uso de comentarios
*/


#include <stdio.h>
#include <string.h>
#include <conio.h>

int main() {
	
	/*Creamos e inicilizamos los string para comparar  m�s adelante seg�n el d�a de la semana*/
	char sabado[] = "sabado", domingo[] = "domingo", dia_actual[10];
	
	/*Variables para almacenar la venta total y sueldo total del vendedor*/
	float ventas_totales, sueldo_total;
	
	/*Damos instrucciones al usario*/
	printf ("\nSi NO es fin de semana, escriba cualquer cosa");
	
	/*Pedimos los datos de entrada*/
	printf ("\n\nInserte el d�a de la semana ");
	gets(dia_actual);
	
	printf ("\nInserte el monto de ventas totales en un d�a ");
	scanf("%f", &ventas_totales);
	
	/*Proceso para determinar el sueldo total (seg�n el d�a de la semana)*/
	if (strcmp(dia_actual, sabado) == 0) //Usamos la funci�n strcmp para comparar dos strings
	{
		sueldo_total = (float)ventas_totales * 1.04;
		
	} else if (strcmp(dia_actual, domingo) == 0) //Usamos la funci�n strcmp para comparar dos strings
	{
		sueldo_total = (float)ventas_totales * 1.05;
		
	} else 
	{
		sueldo_total = (float)ventas_totales * 1.025;
		
	}
	
	/*Salida de los datos (seg�n las ventas totales)*/
	if (ventas_totales > 10000)
	{
		printf ("\nSu sueldo total es de %.3f", sueldo_total + 400);
		
	} else 
	{
		printf ("\nSu sueldo total es de %.3f", sueldo_total + 200);
	}
	
	getch(); //Esperamos iun caracter del teclado
	
	return 0;
}

