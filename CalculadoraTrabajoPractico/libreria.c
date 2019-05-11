/**
 * \Brief Le multiplico un entero a otro entero
 * \parametro int A es el primer número ingresado
 * \parametro Int B es el segundo número ingresado
 * \Return Retorno la multiplicación de los dos números ingresados
 *
*/
int multiplica(int A, int B)
{
    return(A*B);
}
/**
 * \Brief Le sumo un entero, a otro entero
 * \parametro int A es el primer número ingresado
 * \parametro Int B es el segundo número ingresado
 * \Return Retorno la suma de los dos números ingresados
 *
*/
int suma(int A, int B)
{
    return(A+B);
}
/**
 * \Brief Le resto un entero, a otro entero
 * \parametro int A es el primer número ingresado
 * \parametro Int B es el segundo número ingresado
 * \Return Retorno la multiplicación de los dos números ingresados
 *
*/
int resta(int A, int B)
{
    return(A-B);
}
/**
 * \Brief Le divido un entero, a otro entero y adquiero un flotante
 * \parametro float r es un flotante declarado
 * \parametro r recibirá el valor flotante de las divisiones de los flotantes ingresados
 * \Return Retorno la división de los dos números ingresados
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
 * \parametro int A es el número ingresado
 * \parametro int numero es la variable que incrementará en 1 la condición del for
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
 * \parametro int B es el número ingresado
 * \parametro int numero es la variable que incrementará en 1 la condición del for
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
