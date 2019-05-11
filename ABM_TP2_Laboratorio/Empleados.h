typedef struct
{
    int idIncremental;
    char nombre[51];
    char apellido[51];
    float salario;
    int sector;
    int isEmpty;
}eEmpleado;

void inicializarEmpleado (eEmpleado empleado [], int cantidadEmpleados);
int buscarEmpleado (eEmpleado empleado [], int cantidadEmpleados);
int altaEmpleado (eEmpleado empleado [], int cantidadEmpleados, int espacioLibre, int *idIncremental);
void bajaEmpleado (eEmpleado empleado [], int cantidadEmpleados, int idIncremental);
void modificarEmpleado (eEmpleado empleado [], int cantidadEmpleados, int idIncremental);
void ordenarEmpleado (eEmpleado empleado [], int cantidadEmpleados);
void mostrarEmpleado (eEmpleado empleado [], int cantidadEmpleados, int *idIncremental);
int contadorDeEmpleados(eEmpleado empleado[], int cantidadEmpleados);
int salarios(eEmpleado empleado [], int cantidadEmpleados);
int contadorArribaPromedio(eEmpleado empleado[], int cantidadEmpleados, int promedioSalario, int contadorEmpleado);
