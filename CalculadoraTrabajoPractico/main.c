#include <stdio.h>
#include <stdlib.h>
#include "libreria.h"

int main()
{
	int numeroPedidoA=0;
	int numeroPedidoB=0;
	int operaciones;
	int flagA=0;
	int flagB=0;
	int flagCalculos=0;

	do
	{
	system("CLS");
	printf("\n                      MENU                \n");
	printf("\n  Opcion 1: El primer numero es: %d",numeroPedidoA);
	printf("\n  Opcion 2: El segundo numero es: %d",numeroPedidoB);
	printf("\n  Opcion 3: Calcular los numeros: ");
	printf("\n  Opcion 4: Mostrar los resultados: ");
	printf("\n  Opcion 5: Salir.");
	printf("\n  Ingrese un numero de opcion: ");
	scanf("%d",&operaciones);

	switch(operaciones)
	{
		case 1:
		printf("  A= ");
		scanf("%d",&numeroPedidoA);
		flagA =1;
		break;


		case 2:
		printf("  B= ");
		scanf("%d",&numeroPedidoB);
		flagB =1;
		break;

		case 3:
        if(flagA == 0 || flagB == 0)
        {
            printf("\n   Agregue un valor a los numeros \n \n");
            system("PAUSE");
        }
        else
        {
        suma(numeroPedidoA,numeroPedidoB);
        resta(numeroPedidoA,numeroPedidoB);
        multiplica(numeroPedidoA,numeroPedidoB);
        division(numeroPedidoA,numeroPedidoB);
        factorial1(numeroPedidoA);
        factorial2(numeroPedidoB);
        flagCalculos = 1;
        printf("\n   Los valores fueron calculados \n \n");
        system("PAUSE");
        }
		break;

		case 4:
        if(flagA == 0 || flagB == 0 || flagCalculos ==0)
        {
            printf("\n   Agregue un valor a los numeros o calcule los valores previamente \n \n");
            system("PAUSE");
        }
        else
        {
		printf("\n  Los resultados de las operaciones son: ");
		printf("\n  La suma es: %d",suma(numeroPedidoA,numeroPedidoB));
		printf("\n  La resta es: %d",resta(numeroPedidoA,numeroPedidoB));
		printf("\n  La multiplicacion es: %d",multiplica(numeroPedidoA,numeroPedidoB));
		if(numeroPedidoB==0)
		{
    	printf("\n  No se puede dividir entre cero");
		}
		else
		{
		printf("\n  La division es: %.2f",division(numeroPedidoA,numeroPedidoB));
		}
		printf("\n  El factorial del primer numero es: %d",factorial1(numeroPedidoA));
		printf("\n  El factorial del segundo numero es: %d\n \n",factorial2(numeroPedidoB));
		system("PAUSE");
        }
		break;

		case 5:
		return (EXIT_SUCCESS);
		break;

		default:
		printf("\n  Ingrese una opcion del 1 al 5\n \n");
		system("PAUSE");
		break;
	}
}while(operaciones!=5);
}

