#include <stdio.h>
/*30. E.P. que lea un n�mero entero obtenido al lanzar un dado de seis
caras e imprimir el n�mero en letras de la cara opuesta. En las caras
opuestas de un dado de seis caras est�n los n�meros: 1-6, 2-5 y 3-4.
Si el n�mero del dado capturado es menor que 1 o mayor que 6, se
mostrar�: �Un DADO no tiene ese n�mero�. (utilizar switch)*/
int main(void)
{
	int ND;
	printf("Ingrese el n�mero obtenido al lanzar: " );
	scanf ("%d", &ND);
	switch (ND)
	{
	case 1: printf("seis" );
	break;
	case 2: printf("cinco" );
	break;
	case 3: printf("cuatro" );
	break;
	case 4: printf("tres" );
	break;
	case 5: printf("dos" );
	break;
	case 6: printf("uno" );
	break;
	default: printf("Un dado no tiene ese n�mero" );
	}
	
	//Funciona bien.
	
	return 0;
	
}
