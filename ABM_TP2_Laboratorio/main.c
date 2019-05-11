#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "empleados.h"
#include "utn.h"

#define cantidadEmpleados 10

// NOTA: ESTUVE QUERIENDO SOLUCIONAR DE TODAS LAS FORMAS POSIBLES EL INCREMENTAL, Y JAMAS PUDÉ LOGRAR LO QUE PRETENDÍA
// TAMBIÈN DESCONOZCO PORQUE AL QUERER DAR 2 ALTAS CONSECUTIVOS NO TE LO PERMITE, PERO SÍ, SI EN EL MEDIO INFORMAS RESULTADOS
int main()
{
    eEmpleado empleado[cantidadEmpleados];
    inicializarEmpleado(empleado, cantidadEmpleados);

    int opcion;
    int espacioLibre;
    float todosLosSalarios;
    int altaAuxiliar;
    int idIncremental=0;
    int flag=0;
    int contadorEmpleado;
    float promedioSalario;
    int empleadosSuperanPromedio;

    do
    {
        system("CLS");
        printf("\t\n\nMenu\n\n");
        printf("Elija una opcion: \n");
        printf("1. Alta: \n");
        printf("2. Baja: \n");
        printf("3. Modificar: \n");
        printf("4. Informes: \n");
        printf("5. Salir. \n");
        scanf("%d",& opcion);

        switch(opcion)
        {
            case 1:
            espacioLibre = buscarEmpleado(empleado, cantidadEmpleados);
            if(espacioLibre == -1)
            {
                printf("\nNo hay espacio.");
            }
            altaAuxiliar = altaEmpleado(empleado, cantidadEmpleados, espacioLibre, idIncremental);
            if(altaAuxiliar== -1)
            {
                printf("\nAlta exitosa");
                system("PAUSE");
                idIncremental++;
                flag =1;
            }
            else
            {
                printf("\nError.");
            }
            break;

            case 2:
            if(flag == 0)
            {
                printf("\nNo ha habido ningun alta hecha.\n");
                system("PAUSE");
            }
            else
            {
                bajaEmpleado(empleado, cantidadEmpleados, idIncremental);
            }
            break;

            case 3:
            if(flag == 0)
            {
                printf("\nNo ha habido ningun alta hecha.\n");
                system("PAUSE");
            }
            else
            {
                modificarEmpleado(empleado, cantidadEmpleados, idIncremental);
            }
            break;

            case 4:
            if(flag == 0)
            {
                printf("\nNo ha habido ningun alta hecha.\n");
                system("PAUSE");
            }
            else
            {
                ordenarEmpleado(empleado, cantidadEmpleados);
                mostrarEmpleado(empleado, cantidadEmpleados, idIncremental);
                todosLosSalarios = salarios(empleado, cantidadEmpleados);
                printf("\nTodos los salarios suman: $%.2f",todosLosSalarios);
                contadorEmpleado = contadorDeEmpleados(empleado, cantidadEmpleados);
                printf("\nEmpleados activos: %d",contadorEmpleado);
                promedioSalario = todosLosSalarios/contadorEmpleado;
                printf("\nEl promedio de salarios es: $ %.2f",promedioSalario);
                empleadosSuperanPromedio = contadorArribaPromedio(empleado, cantidadEmpleados, promedioSalario, contadorEmpleado);
                printf("\nLa cantidad de Empleados que superan el promedio es de %d\n", empleadosSuperanPromedio);
                system("PAUSE");
            }
            break;

            case 5:
            system(EXIT_SUCCESS);
            break;

            default:
            printf("\nIngrese un numero del 1 al 5\n");
            system("PAUSE");
            break;
        }
    }while(opcion !=5);
}
