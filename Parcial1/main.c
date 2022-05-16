#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float aplicarDescuento(float precioOriginal);
int contarCaracteres(char *palabra,char caracter);


int main()
{
    float precioBruto=200;
    float precioDescuento=aplicarDescuento(precioBruto);
    printf("Descuento: %.2f\n",precioDescuento);

    char palabra[20]="hola mundo";
    char caracter='o';
    printf("Match caracteres: %d\n",contarCaracteres(palabra,caracter));


    return 0;
}

float aplicarDescuento(float precioOriginal)
{
    return precioOriginal*(100-5)/100;
}

int contarCaracteres(char *palabra,char caracter)
{
    int largo=strlen(palabra);
    int cantidadCaracteres=0;

    for(int i=0; i<largo;i++)
    {
        if(palabra[i]==caracter)
        {
            cantidadCaracteres++;
        }
    }

    return cantidadCaracteres;
}
