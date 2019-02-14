/*Nombre Equipo: Picateclas
Autores:
Dur�n Matos Juan Jos�
Gonz�lez Bautista No� Alejandro
L�pez Madera Fernanda Jacqueline
Version: 1.1
Descripcion del programa: Los estudiantes de Ingenier�a presentaron un examen de
admisi�n con 100 preguntas. Se leeran el nombre y el n�mero de respuestas 
correctas para cada una de las 50 personas que presentaron y que determine e 
imprima para cada uno su nombre y su calificaci�n:
Fecha de creacion: 8/feb/2019
*/

#include<stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void){
	/*VARIABLES*/
	char NombrePer[30];
	int preCorrect;
	
	int contPersonas = 0;
	
	
	while(contPersonas<50){		
		/*VARIABLES LOCALES*/
		int flag = 0; //Bandera de validacion
		
		contPersonas++;
		/*ENTRADA*/
		printf("Ingrese el nombre de la persona\n");
		scanf("%s",NombrePer);		
		
		printf("Ingrese el n�mero de preguntas correctas que contest� el usuario (0-100)\n");
		while(flag==0){
		scanf("%d", &preCorrect);
		if(preCorrect>=0 && preCorrect<=100){
			flag = 1;
		}
		else{
			printf("Dato incorrecto, ingrese uno valido\n");
		} 
		} //Termina while de validacion

		/*PROCESO*/
		//Aqui se determina e imprime la calificacion de la persona actual
		printf("\n\t\t\tRESULTADOS\n");
		printf("*************************************************************");
		printf("\nNombre del usuario: %s", NombrePer);
		printf("\nN�mero de preguntas acertadas: %d", preCorrect);
		if(preCorrect<=30){
			printf("\nCalificaci�n obtenida: 0\n");
		}
		else if(preCorrect>30 && preCorrect<=50){
			printf("\nCalificaci�n obtenida: 50\n");
		}
		else if(preCorrect>50 && preCorrect<=60){
			printf("\nCalificaci�n obtenida: 60\n");
		}
		else if(preCorrect>60 && preCorrect<=65){
			printf("\nCalificaci�n obtenida: 70\n");
		}
		else if(preCorrect>65 && preCorrect<=75){
			printf("\nCalificaci�n obtenida: 80\n");
		}
		else if(preCorrect>75 && preCorrect<=90){
			printf("\nCalificaci�n obtenida: 90\n");
		}
		else{
			printf("\nCalificaci�n obtenida: 100\n");
		}
		printf("*************************************************************");
		
		printf("\nPulse otra tecla para continuar la revision");
		getch();
		
		system("cls"); //Cuando la revision de este usuario haya terminado se limpiara la consola para pasar al siguiente
		
	}//Termina ciclo while del contador de personas
	
	system("cls");
	/*SALIDA*/
	printf("La revision ha finalizado");
}

/*El programa funciona correctamente, cumple con los datos solicitados.
El problema ped�a el total de aciertos de cada persona, la forma resuelta anteriormente est� bien 
aunque se tarda m�s

Equipo: SacaChispas
Revis�: Senaida Norely Chan Chan
Fecha: 13/02/2019*/
