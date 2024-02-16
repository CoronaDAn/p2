void menu()
{
    float inv[3][PRODUCT]={{699.99,1800,4399.99,300,299.50},
                            {10,10,10,10,10},
                            {0,0,0,0,0}};
    char *nom[PRODUCT]={
                            "0.Balones de basquetbol",
                            "1.Jersey de lakers NBA",
                            "2.Tenis para basquetbol",
                            "3.Rodilleras basquetbol",
                            "4.Bandas para cabello"
                                            };
    int opcion;
    printf("#################################\n");
    printf("####BIENVENIDO A CORONASTORE#####\n");
    printf("#################################\n\n");
    printf("Menu:\n");
    printf("1.Mostrar elementos de la tienda\n");
    printf("2.Mostrar carrito\n");
    printf("3.Agregar elementos al carrito\n");
    printf("4.eliminar elementos del carrito\n");
    printf("5.Salir de la aplicacion\n");

    printf("Opcion de numero elegida:");
    scanf("%i", &opcion);
    switch(opcion)
    {
    case 1:
        elemen_tienda(&inv,&nom);
        break;
    case 2:
        carrito(&inv,&nom);
        break;
    case 3:
        agregar_carrito(&inv,&nom);
        break;
    case 4:
        eliminar_carrito(&inv,&nom);
        break;
    case 5:
        salir(&inv, &nom);
        break;
    default:
        printf("La opcion no es valida\n");
        getchar();

    }

}
