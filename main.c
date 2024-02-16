#include<stdio.h>
#include<stdlib.h>
#define PRECIO 0
#define CANT 1
#define CAR 2
#define PRODUCT 5

#include "agregar_carrito.c"
#include "eliminar_carrito.c"
#include "elementos_tienda.c"
#include "carrito.c"
#include "menu.c"
#include "salir.c"



int main()
{
    menu();
    getchar();
    return 0;
}
