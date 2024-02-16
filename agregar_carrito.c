void agregar_carrito(float *inv,char *n[PRODUCT])
{
    printf("\n\tNombre\t\t\tDisponible\tPrecio\n");
    for(int i=0;i<PRODUCT;i++)
    {
        printf("%s\t\t    %.0f\t\t$%.2f\n", *(n+i), *(inv+(i*CANT+PRODUCT)), *(inv+(PRECIO*PRODUCT+i)));
    }
    int id;
    int cantidad;
    char mas;
    do{
    printf("\nQue numero de producto deseas agregar:");
    scanf("%i",&id);
    printf("cantidad:");
    scanf("%i",&cantidad);
    if(id>4 || id<0)
    {
        system("cls");
        printf("No existe ese producto!!!\n\n");
    }
    else
    {
      if(cantidad > *(inv+(id*CANT+PRODUCT)))
    {
        system("cls");
        printf("No hay tal cantidad en stock!!!\n\n");
    }
    else
    {
        *(inv+(id*CANT+PRODUCT))-= cantidad;
        printf("%.0f\n", *(inv+(id*CANT+PRODUCT)));
        *(inv+(CAR*PRODUCT+id))+= cantidad;
        printf("Desea agregar otro producto s/n:");
        scanf(" %c", &mas);
        if (mas!='s')
        {
            system("cls");
        }
    }
}
        }while (mas=='s');
        menu();
        ;
}
