/*Se dispone de un archivo indexado (DNI National Identity Document en
orden ascendente) denominado empleados.dat, que contiene los datos de un conjunto
de empleados y cuya clave es el número DNI. Desarrollar un programa capaz de
categorizar los salarios en "Altos", "Medios" y "Bajos" e imprimirlos a pantalla.*/

#define MAXCHAR 100

typedef struct empleados{
    char DNI[MAXCHAR];
    char name[MAXCHAR];
    char lastName[MAXCHAR];
    char sex[MAXCHAR];
    char post[MAXCHAR];
    float salary[MAXCHAR];
};