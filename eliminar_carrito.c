void eliminar_carrito(float *inv,char *n[PRODUCT])
{
   printf("\n\tNombre\t\t\tCantidad\tPrecio\t\t\tTotal\n");
    for(int i=0;i<PRODUCT;i++)
    {
        printf("%s\t\t   %.0f\t\t$%.2f \t\t$%.2f\n", *(n+i), *(inv+(CAR*PRODUCT+i)), *(inv+(PRECIO*PRODUCT+i)), *(inv+(CAR*PRODUCT+i))**(inv+(PRECIO*PRODUCT+i)));
    }
    int id;
    int cantidad;
    char mas;
    do{
    printf("\nQue numero de producto deseas quitar:");
    scanf("%i",&id);
    printf("cantidad:");
    scanf("%i",&cantidad);
    if(id>4 || id<0)
    {
        system("cls");
        printf("Este producto no esta en tu carrito!!\n\n");
    }
    else
    {
         if(cantidad > *(inv+(CAR*PRODUCT+id)))
    {
        system("cls");
        printf("No existe esa cantidad de productos en su carrito!!!\n\n");
    }
    else
    {
        *(inv+(id*CANT+PRODUCT))+= cantidad;
        printf("%.0f\n", *(inv+(id*CANT+PRODUCT)));
        *(inv+(CAR*PRODUCT+id))-=cantidad;
        printf("Desea quitar otro producto s/n:");
        scanf(" %c", &mas);
        if (mas!='s')
        {
            system("cls");
        }
    }
    }
        }while (mas=='s');
        menu();
}
