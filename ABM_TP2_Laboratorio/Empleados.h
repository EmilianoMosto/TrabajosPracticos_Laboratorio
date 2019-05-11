typedef struct
{
    int idIncremental;
    char nombre[51];
    char apellido[51];
    float salario;
    int sector;
    int isEmpty;
}eEmpleado;

/** \brief inicializo los estados a 0 para indicar que estan libres.
 * \param eEmpleado empleado[] recibe el array de estructura de empleados.
 * \param cantidadEmpleados es la cantidad máxima que puede haber.
 * \return
 *
 */
void inicializarEmpleado (eEmpleado empleado [], int cantidadEmpleados);

/** \brief  busco a partir del indice
 *  \param  cantidadEmpleados es la cantidad máxima que puede haber.
 *  \param  i recibe el indice del array
 *  \return  retorna el Id encontrado, o -1 si fallo algo.
 */
int buscarEmpleado (eEmpleado empleado [], int cantidadEmpleados);

/** \brief  doy de alta al empleado
 *  \param  cantidadEmpleados es la cantidad máxima que puede haber.
 *  \param  i es el indice donde realiza el alta.
 *  \return  retorna el Id con sus datos, o -1 si fallo algo.
 */
int altaEmpleado (eEmpleado empleado [], int cantidadEmpleados, int espacioLibre, int idIncremental);

/** \brief  doy de baja algun empleado (si hay).
 *  \param  cantidadEmpleados es la cantidad máxima que puede haber.
 *  \param  auxiliarMenu representa el id para buscar.
 *  \return  si lo encontró se da de baja, sino se encuentra o no lo desea, no se le da baja.
 */
void bajaEmpleado (eEmpleado empleado [], int cantidadEmpleados, int idIncremental);

/** \brief  modifico algun empleado a partir de un menu (si hay).
 *  \param  cantidadEmpleados es la cantidad máxima que puede haber.
 *  \param  auxiliarMenu representa el id para buscar.
 *  \return  si lo encontró se modifica, sino se encuentra o no lo desea, no se modifica.
 */
void modificarEmpleado (eEmpleado empleado [], int cantidadEmpleados, int idIncremental);

/** \brief  ordeno los empleados a partir del apellido.
 *  \param  cantidadEmpleados es la cantidad máxima que puede haber.
 *  \param  I y J son los indices para comparar.
 *  \return  quedan ordenados.
 */
void ordenarEmpleado (eEmpleado empleado [], int cantidadEmpleados);

/** \brief  Muestro todos los empleados.
 *  \param  cantidadEmpleados es la cantidad máxima que puede haber.
 *  \param  I es el array para buscarlos
 *  \return Los muestro ordenados
 */
void mostrarEmpleado (eEmpleado empleado [], int cantidadEmpleados, int idIncremental);

/** \brief  Cuento los empleados.
 *  \param  cantidadEmpleados es la cantidad máxima que puede haber.
 *  \param  si el espacio del array esta ocupado, incremento el contador.
 *  \return  retorno el valor del contador.
 */
int contadorDeEmpleados(eEmpleado empleado[], int cantidadEmpleados);

/** \brief  Salarios.
 *  \param  cantidadEmpleados es la cantidad máxima que puede haber.
 *  \param  acumularSalarios es usado para llevar la suma de cada salario registrado.
 *  \return  retorno la suma total.
 */
int salarios(eEmpleado empleado [], int cantidadEmpleados);

/** \brief  Cuento los salarios superiores al promedio de ellos.
 *  \param  cantidadEmpleados es la cantidad máxima que puede haber.
 *  \param  si el espacio esta ocupado y si el salario es superior al promedio, cuento.
 *  \return  retorno el contador total.
 */
int contadorArribaPromedio(eEmpleado empleado[], int cantidadEmpleados, int promedioSalario, int contadorEmpleado);
