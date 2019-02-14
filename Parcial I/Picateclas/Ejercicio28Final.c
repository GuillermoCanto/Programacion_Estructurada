#include <stdio.h>
#include <ctype.h>
/*
Nombre: Detectar un caracter
Autores: 
Dur�n Matos Juan Jos�
Gonz�lez Bautista No� Alejandro
L�pez Madera Fernanda Jacqueline
Descripcion: E.P. que determine e imprima si el car�cter c�digo asociado a un
c�digo introducido por teclado, corresponde a un car�cter alfab�tico,
d�gito, de puntuaci�n, especial o no imprimible.
Fecha: 06Ene19
Versi�n: 1.1 */

int main(int argc, char *argv[]){
	int str;
	
	printf("Ingrese un caracter\n");
	str=getchar();
		if(isdigit(str)){/*Checa si es d�gito*/
			printf("\nEl caracter ingresado es un numero");
		}else{
			if(isalpha(str)){/*Checa si es alfab�tico*/
				printf("\nEl caracter ingresado es alfabetico");
			}else{
				if(ispunct(str)){/*Checa si es de puntuaci�n*/
					printf("\nEl caracter ingresado es de puntuacion");
				}else{
					if(!isprint(str)){/*Checa si no es imprimible*/
						printf("\nEl caracter ingresado no es imprimible");
					}
					else{/*Como no fue ninguna de las anteriores, se considera especial*/
					printf("\nEl caracter ingresado es especial");
					}
				}
			}
		}/*Usamos la biblioteca #include <ctype.h> para clasificar caracteres*/
	return 0;			
}

/*El programa funciona correctamente. Falt� el no imprimible


Equipo:
Revis�: Ricardo Nicol�s Canul Ibarra
Fecha: 6/02/2019*/
