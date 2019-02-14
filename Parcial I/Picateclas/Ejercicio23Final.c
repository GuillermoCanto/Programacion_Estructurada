/*
Nombre Equipo: Picateclas
Autores:
Dur�n Matos Juan Jos�
Gonz�lez Bautista No� Alejandro
L�pez Madera Fernanda Jacqueline
Version: 1.1
Descripcion del programa: Consiste en una papeler�a que vende libros a $100, 
cuadernos a $15.50 y plumas a $2.35 que determina e imprime el monto total de una
venta, seg�n el n�mero de art�culos vendidos.
Fecha de creacion: 31/ene/2019
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char *argv[]) {
	float Libro = 100.0;
	float Cuaderno = 15.50;
	float Pluma = 2.35;
    float total = 0.0;
	
	float cantidad;
	char opcion;
	
	do{
	system("cls"); //Esta funcion limpia la consola cada vez que se regresa al menu principal
	
	printf("Papeler�a PicaTeclas\n");
	printf("Seleccione un art�culo\n");
	printf("1. Libro\n");
    printf("2. Cuaderno\n");
	printf("3. Pluma\n");
	printf("4. Realizar compra\n");
	scanf("%c", &opcion);
	//De acuerdo a la seleccion del articulo se pedira cuantos unidades desea compra y se ira anexando a su total a pagar
	switch(opcion){		
	    case '1':
			printf("Seleccione la cantidad de libros ($100 c/u)\n");
            scanf("%f",&cantidad);
			total = total + cantidad * Libro;
			printf("El art�culo se ha agregado exitosamente");
			getch();
	    break;
	    case '2':
			printf("Seleccione la cantidad de cuadernos ($15.50 c/u)\n");
			scanf("%f",&cantidad);
			total = total + cantidad * Cuaderno;
			printf("El art�culo se ha agregado exitosamente");
			getch();
	    break;
	    case '3':
		    printf("Seleccione la cantidad de plumas ($2.35 c/u)\n");
		    scanf("%f",&cantidad);
		    total = total + cantidad * Pluma;
			printf("El art�culo se ha agregado exitosamente");
			getch();
		break;
	    case '4':
		   printf("El monto total a pagar es: $%f ", total);
		break;
		default:
			printf("Selecci�n no v�lida");
		break;
	}
	} while(opcion != '4'); //El menu se seguira ejecutando hasta que se realize la compra correspondiente
	return 0;
}

/*El programa funciona correctamente, se usa un Do-while para validar
En el caso 3 del switch, no se cambi� a "plumas"  

Equipo:
Revis�: Ricardo Nicol�s Canul Ibarra
Fecha: 6/02/2019*/
