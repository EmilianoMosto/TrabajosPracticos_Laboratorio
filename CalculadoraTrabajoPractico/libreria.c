/**
 * \Brief Le multiplico un entero a otro entero
 * \parametro int A es el primer n�mero ingresado
 * \parametro Int B es el segundo n�mero ingresado
 * \Return Retorno la multiplicaci�n de los dos n�meros ingresados
 *
*/
int multiplica(int A, int B)
{
    return(A*B);
}
/**
 * \Brief Le sumo un entero, a otro entero
 * \parametro int A es el primer n�mero ingresado
 * \parametro Int B es el segundo n�mero ingresado
 * \Return Retorno la suma de los dos n�meros ingresados
 *
*/
int suma(int A, int B)
{
    return(A+B);
}
/**
 * \Brief Le resto un entero, a otro entero
 * \parametro int A es el primer n�mero ingresado
 * \parametro Int B es el segundo n�mero ingresado
 * \Return Retorno la multiplicaci�n de los dos n�meros ingresados
 *
*/
int resta(int A, int B)
{
    return(A-B);
}
/**
 * \Brief Le divido un entero, a otro entero y adquiero un flotante
 * \parametro float r es un flotante declarado
 * \parametro r recibir� el valor flotante de las divisiones de los flotantes ingresados
 * \Return Retorno la divisi�n de los dos n�meros ingresados
 *
*/
float division(int A, int B)
{
	float r;
	r = (float)A/B;
        return r;
}
/**
 * \Brief Calculo el factorial de un entero recibido
 * \parametro int A es el n�mero ingresado
 * \parametro int numero es la variable que incrementar� en 1 la condici�n del for
 * \parametro int resultado se inicializa en 1, y se acumula
 * \Return Retorno el valor del factorial.
 *
*/
int factorial1(int A)
{
	int numero;
	int resultado = 1;

for(numero=1; numero<=A; numero++)
{
	resultado = resultado*numero;
}
	return (resultado);
}
/**
 * \Brief Calculo el factorial de un entero recibido
 * \parametro int B es el n�mero ingresado
 * \parametro int numero es la variable que incrementar� en 1 la condici�n del for
 * \parametro int resultado se inicializa en 1, y se acumula
 * \Return Retorno el valor del factorial.
 *
*/
int factorial2(int B)
{
	int numero;
	int resultado = 1;

for(numero=1; numero<=B; numero++)
{
	resultado = resultado*numero;
}
	return (resultado);
}
