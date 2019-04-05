#include <stdio.h>
#include <stdlib.h>
#include "Menu.h"
#include "Operaciones.h"

int menu()
{
int opcion;
float numeroUno = 0;
float numeroDos = 0;
float resultadoSuma;
float resultadoResta;
float resultadoMulti;
float resultadoDiv;
long long int resultadoFactoA;
long long int resultadoFactoB;
int flagDiv = 0;
int flagFactoA = 0;
int flagFactoB = 0;
char seguir = 's';
do{
    printf("Elija una opcion\n");
    printf("1.Ingrese el primer operando %.2f\n", numeroUno);
    printf("2.Ingrese el segundo operando %.2f\n", numeroDos);
    printf("3.Calcular todas las operaciones\n");
    printf("4.Informar resultados\n");
    printf("5.Salir\n");
    scanf("%d", &opcion);

    switch(opcion){
    case 1:
        printf("A = ");
        scanf("%f", &numeroUno);
        break;
    case 2:
        printf("B = ");
        scanf("%f", &numeroDos);
        break;
    case 3:
        resultadoSuma = suma(numeroUno,numeroDos);
        resultadoResta = resta(numeroUno,numeroDos);
        resultadoMulti = multiplicacion(numeroUno,numeroDos);
        if(numeroDos == 0.0){
            flagDiv = 1;
        }else{
            flagDiv = 0;
            resultadoDiv = divicion(numeroUno,numeroDos);
        }
        if(numeroUno < 0 || numeroUno - (int)numeroUno || numeroUno > 20){
            flagFactoA = 1;
        }else{
            flagFactoA = 0;
            resultadoFactoA = factorial(numeroUno);
        }
        if(numeroDos < 0 || numeroDos - (int)numeroDos || numeroDos > 20){
            flagFactoB = 1;
        }else{
            flagFactoB = 0;
            resultadoFactoB = factorial(numeroDos);
        }
        break;
    case 4:
        printf("La suma de los numeros es: %.2f\n", resultadoSuma);
        printf("La resta de los numeros es: %.2f\n", resultadoResta);
        printf("La multiplicacion de los numeros es: %.2f\n", resultadoMulti);
        if(flagDiv == 1){
            printf("No se puede dividir por 0\n");
        }else{
            printf("La divicion de los numeros es: %.2f\n", resultadoDiv);
        }
        if(flagFactoA == 1){
            printf("No es posible calcular el factorial del operando 'A'\n");
        }else{
            printf("El factorial del operando 'A' es: %I64d\n", resultadoFactoA);
        }
        if(flagFactoB == 1){
            printf("No es posible calcular el factorial del operando 'B'\n");
        }else{
            printf("El factorial del operando 'B' es: %I64d\n", resultadoFactoB);
        }
        break;
    case 5:
        seguir = 'n';
        break;
    default:
        printf("Error. Reingrese un numero valido");
        break;
    }
    system("Pause");
    system("cls");
}while(seguir == 's');
        return 0;
}

