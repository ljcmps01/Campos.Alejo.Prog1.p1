#include <stdio.h>
#include <stdlib.h>

float aplicarDescuento(float precioOriginal);

int main()
{

    printf("Descuento: %.2f\n",aplicarDescuento(200));
    return 0;
}

float aplicarDescuento(float precioOriginal){
    return precioOriginal*(100-5)/100;
}
