/*43.- E.P. que lea 250 n�meros y que determine e imprima cuantos
son positivos y cuantos son negativos.
Fecha: 11/02/2019
Versi�n: 1.0 */
#include <stdio.h>

int main()
{
	//ENTRADA//
	int SPos, SNeg,cc;
	float num;
	SPos=0;
	SNeg=0;
	cc=0;
	//PROCESO//
	do{
		cc=cc+1;
		printf("Teclee su n�mero: ");
		scanf("%f", &num);
		if (num>=0)
		{
			SPos=SPos+1;
		}
		else{
			SNeg=SNeg+1;
		}
	} while(cc!=250);
	//SALIDA//
	printf("La cantidad de n�meros positivos es de %d",SPos);
	printf("\n La cantidad de n�meros negativos es de %d",SNeg);
	return 0;
}
