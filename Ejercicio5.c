/*El director de un colegio, desea un programa de computadora que procese
un archivo de registros denominado calificaciones.dat correspondiente a los diferentes
alumnos de una asignatura, con el fin de obtener la siguiente información:*/

#define MAXCHAR 100

typedef struct calificaciones{
    char carnet[MAXCHAR];
    char name[MAXCHAR];
    char lastName[MAXCHAR];
    int finalGrade[MAXCHAR];
};
