#include <stdio.h> 
#include <conio.h>
#include <math.h>

/*Ejercicio 27: Dias del mes
Descripci�n: E.P. que lea el n�mero de un mes (1 a 12) y determine e imprima el
n�mero de d�as de ese mes. 
Fecha: 05/02/2019
Versi�n: 1.0 */

int main () 
{
	int mes ; 
	
	printf( "\n Dime el n�mero de mes " ) ;
	scanf( "%d",&mes) ; 
	
	switch (mes) 
	{
case 1: printf( "\n Enero, 31 d�as " ) ;
break;
case 2: printf( "\n Febrero, 28 o 29 dias " ) ;
break;
case 3: printf( "\n Marzo, 31 dias " ) ;
break;
case 4: printf( "\n Abril, 30 dias " ) ;
break;
case 5: printf( "\n Mayo, 31 dias " ) ;
break;
case 6: printf( "\n Junio, 30 dias " ) ;
break;
case 7: printf( "\n Julio, 31 dias " ) ;
break;
case 8: printf( "\n Agosto, 31 dias " ) ;
break;
case 10: printf( "\n Septiembre, 30 dias " ) ;
break;
case 11: printf( "\n Octubre, 31 dias " ) ;
break;
case 12: printf( "\n Noviembre, 30 dias " ) ;
break;
printf( "\n Diciembre, 31 dias " ) ;
break;
default:
	printf( "\n Ese mes no existe " ) ; 
	}

getch () ; 
	
	//A partir de Agosto, el n�mero no coincide con el mes
	
	/*Caso 1
	Dime el n�mero de mes 9
	
	Ese mes no existe
	*/
	
	/*Caso 2 ("Octubre no es el mes 11")
	Dime el n�mero de mes 11
	
	Octubre, 31 dias
	*/
	
	/*No hay caso para Diciembre
	printf( "\n Diciembre, 31 dias " ) ;
	break;
	*/

return 0 ;
	
 



}
