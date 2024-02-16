void carrito(float *inv,char *n[PRODUCT])
{
    char salir,f;
    printf("\n\tNombre\t\t\tCantidad\tPrecio\t\t\tTotal\n");
    for(int i=0;i<PRODUCT;i++)
    {
         printf("%s\t\t   %.0f\t\t$%.2f \t\t$%.2f\n", *(n+i), *(inv+(CAR*PRODUCT+i)), *(inv+(PRECIO*PRODUCT+i)), *(inv+(CAR*PRODUCT+i))**(inv+(PRECIO*PRODUCT+i)));
    }
    for(f=0;f<3;f++)
    {
        printf("\nTecla s para salir:");
        scanf(" %c", &salir);
        if(salir=='s')
        {
            f=3;
            system("cls");
            menu();
        }
    }
}
