/*
Nombre Equipo: Picateclas
Dur�n Matos Juan Jos�
Gonz�lez Bautista No� Alejandro
L�pez Madera Fernanda Jacqueline
Version: 1.1
Descripcion del programa: Consiste en entrar en una invitacion por medio de
4 contrase�as o palabras clave, si el usuario ingresa todas las palabras
correctamente en un orden especifico podra acceder a la fiesta, en caso
contrario no se permitira el acceso a esta y de cualquier forma finaliza el
programa.
Fecha de creacion: 1/feb/2019
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char clave1[6];  //tienes
	char clave2[3];  //que
	char clave3[5];  //estar
	char clave4[8];  //invitado
	
	printf("Invitaci�n a la comida-chicharriza por el maestro Emilio Rej�n\n");
	printf("Ingrese las 4 contrase�as de manera ordenada para proceder\n");
	
	/*Aqui se comprobaran las contrase�as si se estan ingresando correctamente
	en caso de fallar alguna se negara el acceso a la invitacion*/
	
	scanf("%s",clave1); //Se introduce la 1ra clave
	if(strcmp(clave1, "tienes") == 0){
		scanf("%s",clave2); //Se introduce la 2da clave
		if(strcmp(clave2, "que") == 0){
			scanf("%s",clave3); //Se introduce la 3ra clave
			if(strcmp(clave3, "estar") == 0){
				scanf("%s",clave4); //Se introduce la 4ta clave
				if(strcmp(clave4, "invitado") == 0){
					//Si las 4 contrasenas son correctas se realizara la invitacion exitosamente
					printf("ERES BIENVENIDO!\nBuen provecho ^_^"); /
				}
				else{
					printf("TU NO ESTAS INVITADO"); //Interrupcion de la invitacion por ingresar la 4ta clave erroneamente
				}
			}
			else{
				printf("TU NO ESTAS INVITADO"); //Interrupcion de la invitacion por ingresar la 3ra clave erroneamente
			}
		}
		else{
			printf("TU NO ESTAS INVITADO"); //Interrupcion de la invitacion por ingresar la 2da clave erroneamente
		}
	}
	else{
		printf("TU NO ESTAS INVITADO"); //Interrupcion de la invitacion por ingresar la 1ra clave erroneamente
	}
	
	return 0;
}

/*El programa funciona correctamente. Separar el c�digo un poco para que sea m�s f�cil leerlo

Equipo:
Revis�: Ricardo Nicol�s Canul Ibarra
Fecha: 6/02/2019*/

