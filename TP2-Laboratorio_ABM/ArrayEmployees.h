typedef struct
{
    int id;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int isEmpty;

}eEmployee;

typedef struct
{
    int idSector;
    char descripcion[51];
    float totalSalarySector;

}eSectores;

////////////////////////////
 ///Funciones en el menu///
////////////////////////////
int altaDeEmpleado(eEmployee[], int, int);
void modificarEmpleado(eEmployee[], int, int);
int bajaDeEmpleado(eEmployee[], int, int);
void mostrarEmpleados(eEmployee[], eSectores[], int, int, int);

////////////////////////////////////////
///Funciones validacion y pedir datos///
////////////////////////////////////////
char opciones(char[]);
void ingresoPalabra(char[], char[]);
void correctorPalabras(char[]);
float ingresoNumero(char[]);

///////////////////////
 ///Otras Funciones///
///////////////////////

int removeEmployee(eEmployee[], int, int);
void sortEmployees(eEmployee[], int, int);
void ordenarEmpleados(eEmployee[], int, int);
int calcularSueldoSectores(eEmployee[], eSectores[], int, int);

void cargarDatos(eEmployee[], eSectores[], int);
void desplegarDatos(eEmployee, eSectores[]);
void cargarDatosSueldos(eEmployee[], eSectores[], int, int, int);

void initEmployees(eEmployee[], int);
int buscarLibre(eEmployee[], int);
int findEmployeeById(eEmployee[], int, int);
void opcionesDeCambio(eEmployee[], int, char);


