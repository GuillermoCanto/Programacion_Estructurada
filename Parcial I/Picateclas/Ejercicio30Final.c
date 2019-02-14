/*Programa: CaraDelDado.c

Autor: EQUIPO PICATECLAS
L�pez Madera Fernanda Jacqueline
Gonz�lez Bautista No� Alejandro
Dur�n Matos Juan Jos�

Descripci�n: Lee un n�mero entero correspondiente a una de las caras de un dado e imprime con letras el n�mero de la cara opuesta.
Versi�n: 1.0
Fecha de creacion: 4/feb/2019
*/
#include <stdio.h>
#include <conio.h>

int main (void){

/*Se define la variable a utilizar*/
int cara;

/*ENTRADA. Se solicita el n�mero de la cara*/
printf("Inserta el n�mero de la cara que sali�: ");
scanf("%i", &cara);

/*PROCESO. Se eval�a a cual cara corresponde*/
    switch (cara){

        case 1:
            /*SALIDA. Se imprime la cara correspondiente*/
            printf("La cara opuesta es seis.");
            break;

        case 2:
            /*SALIDA*/
            printf("La cara opuesta es cinco.");
            break;

        case 3:
            /*SALIDA*/
            printf("La cara opuesta es cuatro.");
            break;

        case 4:
            /*SALIDA*/
            printf("La cara opuesta es tres.");
            break;

        case 5:
            /*SALIDA*/
            printf("La cara opuesta es dos.");
            break;

        case 6:
            /*SALIDA*/
            printf("La cara opuesta es uno.");
            break;

        default:
            /*SALIDA*/
            printf("Un dado no tiene ese n�mero.");
            break;
}


return 0;
getch();
}

/*El programa funciona correctamente. 

Equipo:
Revis�: Ricardo Nicol�s Canul Ibarra
Fecha: 6/02/2019*/
