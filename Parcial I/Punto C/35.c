/*35 E.P. que lea 25 n�meros (N) y que imprima los que sean iguales a
cero.*/
#include <stdio.h>

int main(int argc, char *argv[]) 
{
	int num, numValidos;//Declaracion de variables
	int cont = 0;
	while (cont != 25){
		printf("Dame el n�mero: ");
		scanf("%d", &num);	//Entrada
		numValidos = 0;
		if (num == 0){//Proceso
			numValidos = num;
			printf("Su n�mero %d es igual a 0 \n", numValidos );//SAlida
		}
		cont = cont + 1;
	}
	return 0;
}
/*
-El codigo cumple su funci�n
-no imprime caracteres especiales
-No tiene sentido el uso de la variable numValidos, ya se sabe que el numero va a ser cero SIEMPRE
-Hay partes del codigo que se pueden reducir usando otros operadores ejemplo, el ++ (incremento)
-Es legible.
-Revis�: Programadores Empedernidos
-Fecha: 13 de febrero del 2019
*/
