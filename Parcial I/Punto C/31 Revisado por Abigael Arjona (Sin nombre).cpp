/*31 E.P. que lea una letra min�scula o may�scula, determine e imprima
la posici�n respectiva; por ejemplo: a=1 y la Z=27. (utilizar switch). */

#include <stdio.h>

int main() 
{
	char letra;
	printf("Ingrese una letra del abecedario para conocer su posici�n: ");
	scanf("%c", &letra);
	switch(letra)
	{
	case 'a': 
	case 'A': 
		printf("Posici�n 1");
	    break;
	case 'b': 
	case 'B': 
		printf("Posici�n 2");
		break;
	case 'c': 
	case 'C': 
		printf("Posici�n 3");
		break;
	case 'd': 
	case 'D': 
		printf("Posici�n 4");
		break;
	case 'e': 
	case 'E': 
		printf("Posici�n 5");
		break;
	case 'f': 
	case 'F': 
		printf("Posici�n 6");
		break;
	case 'g': 
	case 'G': 
		printf("Posici�n 7");
		break;
	case 'h': 
	case 'H': 
		printf("Posici�n 8");
		break;
	case 'i': 
	case 'I': 
		printf("Posici�n 9");
		break;
	case 'j': 
	case 'J': 
		printf("Posici�n 10");
		break;
	case 'k': 
	case 'K': 
		printf("Posici�n 11");
		break;
	case 'l': 
	case 'L': 
		printf("Posici�n 12");
		break;
	case 'm': 
	case 'M': 
		printf("Posici�n 13");
		break;
	case 'n': 
	case 'N': 
		printf("Posici�n 14");
		break;
	case '�': 
	case '�': 
		printf("Posici�n 15");
		break;
	case 'o': 
	case 'O': 
		printf("Posici�n 16");
		break;
	case 'p': 
	case 'P': 
		printf("Posici�n 17");
		break;
	case 'q': 
	case 'Q': 
		printf("Posici�n 18");
		break;
	case 'r': 
	case 'R': 
		printf("Posici�n 19");
		break;
	case 's': 
	case 'S': 
		printf("Posici�n 20");
		break;
	case 't': 
	case 'T': 
		printf("Posici�n 21");
		break;
	case 'u': 
	case 'U': 
		printf("Posici�n 22");
		break;
	case 'v': 
	case 'V': 
		printf("Posici�n 23");
		break;
	case 'w': 
	case 'W': 
		printf("Posici�n 24");
		break;
	case 'x': 
	case 'X': 
		printf("Posici�n 25");
		break;
	case 'y': 
	case 'Y': 
		printf("Posici�n 26");
		break;
	case 'z': 
	case 'Z': 
		printf("Posici�n 27");
		break;
	default: printf("NO ES UNA LETRA");	
	}
	
	//Funciona bien.
	
	return 0;
}
