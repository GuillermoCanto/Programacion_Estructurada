/* E.P. que lea una letra min�scula o may�scula, determine e imprima la posici�n respectiva; 
por ejemplo: a=1 y la   Z=27. (utilizar switch).

Elaborado por:
Ricardo Nicol�s Canul Ibarra
Senaida Norely Chan Chan
Javier Alejandro Chim Cem�

Fecha: 31/ene/2019
Version: 1.0 */

#include <stdio.h>
#include <conio.h>

int main() {
	
	/*Declaramos las variables necesarias para el programa*/
	char letra;
	
	/*Pedimos la entrada*/
	printf("\nInserte una letra del abecedario ");
	scanf("%c", &letra); //Leemos la letra alfab�tica
	
	switch (letra) //Evaluamos la letra en el switch (en C, el switch acepta caracteres)
	{
	
	case 'A':
	case 'a': printf("\nA = 1"); //Salida seg�n la letra insertada
		break;
		
	case 'B':	
	case 'b': printf("\nB = 2");
		break;
		
	case 'C':
	case 'c': printf("\nC = 3");
		break;
		
	case 'D':	
	case 'd': printf("\nD = 4");
		break;
		
	case 'E':
	case 'e': printf("\nE = 5");
		break;
		
	case 'F':	
	case 'f': printf("\nF = 6");
		break;
		
	case 'G':
	case 'g': printf("\nG = 7");
		break;
		
	case 'H':	
	case 'h': printf("\nH = 8");
		break;
		
	case 'I':
	case 'i': printf("\nI = 9");
		break;
		
	case 'J':	
	case 'j': printf("\nJ = 10");
		break;
		
	case 'K':
	case 'k': printf("\nK = 11");
		break;
		
	case 'L':	
	case 'l': printf("\nL = 12");
		break;
		
	case 'M':
	case 'm': printf("\nM = 13");
		break;
		
	case 'N':	
	case 'n': printf("\nN = 14");
		break;
		
	case '�':
	case '�': printf("\n� = 15");
		break;
		
	case 'O':	
	case 'o': printf("\nO = 16");
		break;
		
	case 'P':
	case 'p': printf("\nP = 17");
		break;
		
	case 'Q':	
	case 'q': printf("\nQ = 18");
		break;
		
	case 'R':
	case 'r': printf("\nR = 19");
		break;
		
	case 'S':	
	case 's': printf("\nS = 20");
		break;
		
	case 'T':
	case 't': printf("\nT = 21");
		break;
		
	case 'U':	
	case 'u': printf("\nU = 22");
		break;
		
	case 'V':
	case 'v': printf("\nV = 23");
		break;
		
	case 'W':	
	case 'w': printf("\nW = 24");
		break;	
		
	case 'X':
	case 'x': printf("\nX = 25");
		break;
		
	case 'Y':	
	case 'y': printf("\nY = 26");
		break;
		
	case 'Z':
	case 'z': printf("\nZ = 27");
		break;
		
	default: printf("\nInsert� una letra no v�lida"); //Salida por si se insert� un caracter no v�lido
	break;
	
	}
	
	getch();//Esperamos un carcater del teclado
	
	return 0;
}

/*El c�digo funciona correctamente, pero las salidas son en may�sculas �nicamente, lo mejor ser�a que imprima 
el caracter tal cual fue ingresado (may�scula o min�scula). El c�dico es bastante claro y las partes est�n bien se�aladas. 
S�lo falt� el nombre de los autores*/
