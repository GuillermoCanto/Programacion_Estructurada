/*34 E.P. que lea 100 n�meros (N) y que los imprima.*/
#include <stdio.h>

int main(int argc, char *argv[])
{
	
	int num;//Dcelaracion de variables
	int cont = 0;
	while (cont != 100)
	{
		printf("Dame t� n�mero: ");
		scanf("%d", &num);	//entrada
		printf("%d \n", num);//salida
		cont = cont + 1;
	}
	return 0;
}

/*
-El codigo cumple su funci�n
-no imprime caracteres especiales
-Hay partes del codigo que se pueden reducir usando otros operadores ejemplo, el ++ (incremento)
-Es legible y entendible.
-Revis�: Programadores Empedernidos
-Fecha: 13 de febrero del 2019
*/
