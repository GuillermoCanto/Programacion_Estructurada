#include <stdio.h>

/*	Ejercicio: ADA 4, Ejercicio 39.
Descripci�n: Una  cadena  de  5  tiendas  determina  para  cada  una,  al  final  del mes 
los  montos  de  sus  ventas  y  costos.      E.P.  que  determine
e imprima   cu�ntas   tiendas   obtuvieron   una   utilidad   mayor   a   los   $2,000,000.-al final del a�o.
Fecha: 12 Febrero 2019
Versi�n: 1.0
*/

int main() {
	
	int cont,contx,contm;
	float suma,venta,costo;
	
	cont=1;
	contx=0;
	
	do{
		printf("\nEmpresa %i\n",cont);
		
		suma=0;
		contm=1;
		
		do{
			printf("\nIntroduzca el monto de venta del mes %i. ",contm);
			scanf ("%f",&venta);
			
			suma += venta;
			
			printf("Introduzca el monto de costos del mes %i. ",contm);
			scanf ("%f",&costo);
			
			suma -= costo;
			
			contm++;
			
		}while (contm <= 12);
		
		if(suma > 2000000){
			contx++;
		}
		
		cont++;
		
	}while (cont <= 5);
	
	printf("\nUn total de %i empresas obtuvieron utilidades mayores a $2,000,000 al final del a�o.",contx);
	
	return 0;
}

