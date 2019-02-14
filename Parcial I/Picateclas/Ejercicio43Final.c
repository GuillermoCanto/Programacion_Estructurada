/*Nombre Equipo: Picateclas
Autores:
Dur�n Matos Juan Jos�
Gonz�lez Bautista No� Alejandro
L�pez Madera Fernanda Jacqueline
Version: 1.0
Descripcion del programa: Lee 250 n�meros y determina e imprime cuantos
son positivos y cuantos son negativos.
Fecha de creacion: 8/feb/2019
*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	/*VARIABLES*/
	int contNum = 0;
	int contNumPost = 0;
	int contNumNeg = 0;
	
	int numero;
	
	/*ENTRADA*/
	//Aqu� se comienzan a leer los n�meros, incrementando por unidad el contador hasta llegar hasta 250
	while(contNum<250){
		contNum++;
		printf("Ingrese un n�mero\n");
		scanf("%d", &numero);
		
		/*PROCESO*/
		//Aqu� se determina y cuenta si el n�mero es positivo o negativo
		if(numero<0){
			contNumNeg++;
		}
		else{
			contNumPost++;
		}
	}
	
	/*SALIDA*/
	printf("\nEl total de n�meros positivos es de: %d", contNumPost);
	printf("\nEl total de n�meros negativos es de: %d", contNumNeg);
	
}

/*Este problema copila correctamente, es decir esta completo en los datos que se
solicitaron, por lo que se encuentran correctos

Equipo: SacaChispas
Revis�: Senaida Norely Chan Chan
Fecha: 13/02/2019*/
