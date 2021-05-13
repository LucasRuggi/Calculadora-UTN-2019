#include "Operaciones.h"


float suma(float a,float b)
{
    float resultado;
    resultado = a + b;
    return resultado;
}
float resta(float a, float b)
{
    float resultado;
    resultado = a - b;
    return resultado;
}
float multiplicacion(float a, float b)
{
    float resultado;
    resultado = a * b;
    return resultado;
}
float divicion(float a, float b)
{
    float resultado;
    resultado = a / b;
    return resultado;
}
long long int factorial(int numero)
{
    long long int resultado;

    if(numero == 0 || numero == 1){
        resultado = 1;
    }else{
        resultado = numero * factorial(numero -1);
    }
    return resultado;
}

