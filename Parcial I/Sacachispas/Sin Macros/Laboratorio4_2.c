/* 2_Laboratorio4. Un restaurante ofrece hamburguesas sencillas, dobles y triples, 
las cuales tienen un costo de $60.00, $80.00 y $100.00, respectivamente.
 La empresa acepta tarjetas de cr�dito con un cargo adicional de 3% sobre la compra. 
Los clientes pueden hacer su pedido con cualquier cantidad de hamburguesas de los tipos que deseen comer.  
E.P. para determinar cu�nto debe pagar cada uno de los N clientes que llegan al establecimiento. 
Tambi�n, al final del d�a, se requiere imprimir el monto total de las ventas y el total de las comisiones por tarjeta de cr�dito.
Equipo: SacaChispas

Integrantes:
Ricardo Nicol�s Canul Ibarra
Senaida Norely Chan Chan
Javier Alejandro Chim Cem�

Fecha: 14/feb/2019
Version: 1.0 */

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {
	
	/*Creamos las variables necesarias para el programa*/
	int cont_clientes, numero_hamburguesas, letra_no_valida, clientes;
	
	char hamburguesa, validar[2];
	
	float total_pagar, total_pagar_general;
	
	/*Inicializamos las variables*/
	
	total_pagar = 0;
	total_pagar_general = 0;
	
	letra_no_valida = 0; //Esta variable nos ayuda a NO mostrar el pago total cuando se inserta una letra no v�lida.
	
	
	/*Mostramos un peque�o men�*/
	printf("\nS.- Hambueguesa sencilla");
	printf("\nD.- Hambueguesa doble");
	printf("\nT.- Hambueguesa triple");
	
	/*Preguntamos el n�mero de clientes*/
	printf("\n\n�Cu�l es el n�mero de clientes? ");
	scanf("%i", &clientes);
	
	/*Creamos el ciclo for para la lectura de los N clientes*/
	for (cont_clientes = 1; cont_clientes <= clientes; cont_clientes++)
	{
		/*ENTRADA DE DATOS para el n�mero de hamburguesas que el cliente desea*/
		printf("\n\nCliente N� %i, �Cu�l hamburguesa desea? ", cont_clientes);
		fflush(stdin); //Limpiamos el caracter que se insert� anteriormente.
		scanf("%c", &hamburguesa);
		
		/*PROCESO DE LOS DATOS seg�n el tipo de hamburguesa que el cliente desea*/
		switch(hamburguesa)
		{
			
		case 'S':
		case 's':
			
			printf("\n\n�Cu�ntas hamburguesas sencillas desea? ");
			scanf("%i", &numero_hamburguesas);
			
			total_pagar += numero_hamburguesas * 60;
			
			break;
			
		case 'D':
		case 'd':
			
			printf("\n\n�Cu�ntas hamburguesas dobles desea? ");
			scanf("%i", &numero_hamburguesas);
			
			total_pagar += numero_hamburguesas * 80;
			
			break;
			
		case 'T':
		case 't':
			
			printf("\n\n�Cu�ntas hamburguesas triples desea? ");
			scanf("%i", &numero_hamburguesas);
			
			total_pagar += numero_hamburguesas * 100;
			
			break;
			
		default:
			
			printf("\n\nInsert� una letra NO v�lida");
			
			letra_no_valida = 1; //Si se insert� una letra no v�lida, el c�digo escrito despu�s del switch no se mostrar�
			
			cont_clientes--; //Disminuimos el contador para que no se salte al cliente y vuelva a tomar su orden
			
		}
		
		if (letra_no_valida == 0)
		{
			/*Preguntamos si el cliente desea algo m�s*/
			printf("\n\n�Desea algo m�s? (si o no) ");
			fflush(stdin); //Limpiamos la validaci�n que se insert� anteriormente.
			gets(validar);
			
			if (strcmp(validar, "no") == 0)
			{
				/*SALIDA DE DATOS para el total a pagar del cliente actual*/
				printf("\n\nEl pago total es de: %.2f", total_pagar);
				
				total_pagar_general += total_pagar;
				
				total_pagar = 0;
				
			} else
			{
				cont_clientes--; //Disminuimos el contador para que no se salte al cliente y vuelva a tomar su orden
				
			}
			
		} else
		{
			letra_no_valida = 0; //La variable se reiniciar� cada vez que se inserte una letra NO v�lida
		}
	}
	
	/*SALIDA DE DATOS para lo recaudado en general*/
	printf("\n\nLo recaudado por todos los clientes fue: %.2f", total_pagar_general);

	getch(); //Esperar un caracter del teclado
	
	return 0;
}
/* Calific�: Punto C
-Funciona correctamente, compila y realiza lo que se escribe en el c�digo
sin tomar en cuenta que la lectura del dato sea alguno de los 
planteados (en algunas partes si valida).Si se plantean 7 hamburguesas triples arroja
el resultado correcto de 700 pesos.
-Cuando pregunta por el n�mero de hamburguesas no valida que sea un dato
-Tampoco valida que sea un nuero mayor a cero cuando pregunta por el
n�mero de clientes, al preguntar si se quiere algo m�s tampoco valida que 
la respuesta sea alguna de las dos.
mayor o igual a cero 
-no pide ni calcula la opci�n de pago con tarjeta 
-Tampoco calcula en total de comisiones por pagon hechos con tarjeta.
*/
