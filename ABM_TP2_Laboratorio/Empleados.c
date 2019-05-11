#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "empleados.h"
#include "utn.h"

void inicializarEmpleado (eEmpleado empleado [], int cantidadEmpleados)
{
    int i;

    for(i=0; i<cantidadEmpleados; i++)
    {
        empleado[i].isEmpty = 0;
    }

}

int buscarEmpleado(eEmpleado empleado [], int cantidadEmpleados)
{
    int i;
    int indice = -1;

    for(i=0; i<cantidadEmpleados; i++)
    {
        if(empleado[i].isEmpty == 0)
        {
            indice = i;
            //return 0;
            break;
        }
    }
    return indice;
}

int altaEmpleado(eEmpleado empleado [], int cantidadEmpleados, int espacioLibre, int *idIncremental)
{
    int i;
    int indice;
    int flag=0;

    indice = buscarEmpleado(empleado, cantidadEmpleados);

    if(indice != 1)
    {
            /*if(getStringNumeros("\nIngrese el ID: ", empleado[i].id) != 1)
            {
                printf("\nError, Ingrese nuevamente els ID: ");
                scanf("%d",&empleado[i].id);
            }*/
        for(i=0; i<cantidadEmpleados; i++)
        {


            if(getStringLetras("\nIngrese el apellido: ", empleado[i].apellido) == -1 || lengthString(empleado[i].apellido, 31) == 1)
            {
                printf("Ingreselo nuevamente (en letras): ");
                scanf("%s",empleado[i].apellido);
            }

            if(getStringLetras("\nIngrese el nombre: ", empleado[i].nombre) == -1 || lengthString(empleado[i].nombre, 31) == 1)
            {
                printf("Ingreselo nuevamente (en letras): ");
                scanf("%s",empleado[i].nombre);
            }

            empleado[i].salario = getIntPositivo("\nIngrese el salario: ", "Solo puede ingresar un salario en positivo: ");

            empleado[i].sector = getIntLimitado("\nIngrese el sector: ", "Ingrese un sector de un solo digito: ", 1, 9);

            empleado[i].isEmpty = 1;
            flag = 1;
            empleado[i].idIncremental = i+1;
            printf("\nID de empleado: %d\n\n",*idIncremental);
            system("PAUSE");
            break;
            return flag;
        }
    }
    else
    {
        return flag;
    }
}

void bajaEmpleado(eEmpleado empleado [], int cantidadEmpleados, int idIncremental)
{
    int auxiliarMenu;
    int i;
    char respuesta;
    int flag = 0;

    printf("Que ID desea dar de baja?\n");
    scanf("%d",&auxiliarMenu);

    for (i=0; i<cantidadEmpleados; i++)
    {
        if(idIncremental == auxiliarMenu)
        {
            do
            {
                printf("Dar de baja S/N \n");
                fflush(stdin);
                scanf("%c",& respuesta);
                respuesta = toupper(respuesta);

                if(respuesta == 'S')
                {
                    printf("Dado de baja!\n");
                    empleado[i].isEmpty = 0;
                    break;
                }

                else
                {
                    printf("No se da de baja\n");
                    system("PAUSE");
                    break;
                }
                if (flag == 0)
                {
                    printf("\n El ID no existe\n");
                    system("PAUSE");
                    break;
                }
            }while(respuesta != 'S' && respuesta != 'N');
            flag = -1;

        }

    }
}

void modificarEmpleado(eEmpleado empleado[], int cantidadEmpleados, int idIncremental)
{
    int opcionEmpleado;
    int i;
    int auxiliarMenu;
    char respuesta;
    int flag =0;

    for (i=0; i<cantidadEmpleados; i++)
    {
        printf("Que ID desea modificar?");
        printf("\nID: %d\t Apellido: %s\t Nombre: %s\n",idIncremental , empleado[i].apellido, empleado[i].nombre);
        scanf("%d",&auxiliarMenu);

        if( empleado[i].idIncremental == auxiliarMenu)
        {

            do
            {
                printf("Modificar? S/N");
                fflush(stdin);
                scanf("%c",&respuesta);
                respuesta = toupper(respuesta);

                if(respuesta == 'S')
                {
                    do
                    {
                        printf("Menu: \n");
                        printf("1.ID: \n");
                        printf("2.Apellido: \n");
                        printf("3.Nombre: \n");
                        printf("4.Salario: \n");
                        printf("5.Sector: \n");
                        printf("6.Salir.\n");
                        scanf("%d",&opcionEmpleado);

                        switch(opcionEmpleado)
                        {
                            case 1:
                            getIntLimitado("\n\nIngrese el nuevo ID: ", "\nError, Ingrese un ID hasta 20 ", 1, 20);

                            case 2:
                            if(getStringLetras("\nIngrese el nuevo apellido: ", empleado[i].apellido) != 1 || lengthString(empleado[i].apellido, 31) == 1)
                            {
                                printf("Ingreselo nuevamente (en letras): ");
                                scanf("%s",empleado[i].apellido);
                            }
                            break;

                            case 3:
                            if(getStringLetras("\nIngrese el nuevo nombre: ", empleado[i].nombre) != 1 || lengthString(empleado[i].nombre, 31) == 1)
                            {
                                printf("Ingreselo nuevamente (en letras): ");
                                scanf("%s",empleado[i].nombre);
                            }
                            break;

                            case 4:
                            empleado[i].salario = getIntPositivo("Ingrese el nuevo salario: ", "Solo puede ingresar un salario en positivo: ");
                            break;

                            case 5:
                            getIntLimitado("\n\nIngrese el nuevo sector: ", "\nError, Ingrese un sector de 1 digito ", 1, 9);
                            break;

                            case 6:
                            //printf("Saliendo...\n");
                            //system("PAUSE");
                            break;

                            default:
                            printf("Elija una opcion del 1 al 6\n");
                            system("PAUSE");
                            break;
                        }
                    }while(opcionEmpleado !=6);
                    //printf("Cambiado\n");
                    break;
                }
                else
                {
                    printf("No se modifica\n");
                    system("PAUSE");
                    break;
                }
                if (flag == 0)
                {
                    printf("\n El ID no existe\n");
                    system("PAUSE");
                    break;
                }

            }while(respuesta!='S' && respuesta!='N');
            flag = 1;
        }
    }
}

void ordenarEmpleado(eEmpleado empleado[], int cantidadEmpleados)
{
    int i;
    int j;
    eEmpleado aux;

    for(i=0; i<cantidadEmpleados; i++)
    {
        for(j=i+1; j<cantidadEmpleados; j++)
        {
            if(strcmp(empleado[i].apellido, empleado[j].apellido)>0)
            {
                aux = empleado[i];
                empleado[i] = empleado[j];
                empleado[j]= aux;
            }
        }
    }
}

void mostrarEmpleado (eEmpleado empleado [], int cantidadEmpleados, int *idIncremental)
{
    int i;

    printf("Menu de empleados: \n");
    for(i=0; i<cantidadEmpleados; i++)
    {
        if(empleado[i].isEmpty == 1)
        {
            printf("Id de empleado: %d\n",*idIncremental);
            printf("Apellido: %s\n", empleado[i].apellido);
            printf("Nombre: %s\n", empleado[i].nombre);
            printf("Salario: %.2f\n", empleado[i].salario);
            printf("Sector: %d\n", empleado[i].sector);
        }
    }
}

int salarios(eEmpleado empleado [], int cantidadEmpleados)
{
    int i;
    float acumuladorSalario=0;

    for(i=0;i<cantidadEmpleados; i++)
    {

        if(empleado[i].isEmpty == 1)
        {
            acumuladorSalario=acumuladorSalario+empleado[i].salario;
        }
    }
    return acumuladorSalario;
}

int contadorDeEmpleados(eEmpleado empleado[], int cantidadEmpleados)
{
    int i;
    int contador=0;
        for(i=0;i<cantidadEmpleados; i++)
        {
            if(empleado[i].isEmpty == 1)
            {
                contador++;
            }
    }
    return contador;
}
int contadorArribaPromedio(eEmpleado empleado[], int cantidadEmpleados, int promedioSalario, int contadorEmpleado)
{
    int i;
    int j=0;
        for (i=0;i<cantidadEmpleados;i++)
        {
            if(empleado[i].isEmpty != 1)
            {
                    continue;
            }
            if(empleado[i].salario>promedioSalario)
            {
                j++;
            }
        }
    return j;
}
