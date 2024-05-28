/*Se dispone de un archivo denominado stock.dat correspondiente a la
existencia de artículos de un almacén. Se desea señalar aquellos artículos cuyo nivel de
existencia está por debajo del mínimo y que visualicen un mensaje: "Alerta: Hacer
Pedido". Cada artículo contiene un registro con los siguientes campos:*/

#define MAXCHAR 100

typedef struct stock{
    char cody[MAXCHAR];
    char minLevel[MAXCHAR];
    char nowLevel[MAXCHAR];
    char supplier[MAXCHAR];
    float price[MAXCHAR];
};
