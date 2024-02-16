void salir(float *inv,char *n[PRODUCT])
{
    printf("\nLa cifra total a pagar es de $%.2f",*(inv+(CAR*PRODUCT+0))**(inv+(PRECIO*PRODUCT+0))+*(inv+(CAR*PRODUCT+1))**(inv+(PRECIO*PRODUCT+1))+*(inv+(CAR*PRODUCT+2))**(inv+(PRECIO*PRODUCT+2))+*(inv+(CAR*PRODUCT+3))**(inv+(PRECIO*PRODUCT+3))+ *(inv+(CAR*PRODUCT+4))**(inv+(PRECIO*PRODUCT+4)));
    getchar();
}
