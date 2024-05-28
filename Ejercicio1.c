//Desarrollar un programa que permita crear un archivo agenda.dat de direcciones, cuyos registros constan de los siguientes campos:

#define MAXCHAR 100

typedef struct agenda{
    char name[MAXCHAR];
    char age[MAXCHAR];
    char address[MAXCHAR];
    char city[MAXCHAR];
    char phoneNumber[MAXCHAR];
};
