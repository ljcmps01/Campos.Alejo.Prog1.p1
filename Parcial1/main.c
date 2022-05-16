#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 3

float aplicarDescuento(float precioOriginal);
int contarCaracteres(char *palabra,char caracter);

typedef struct
{
    int id;
    char procesador[20];
    char marca[20];
    float precio;
}Notebook;

int ordenarMarcas(Notebook *array,int size);

int main()
{
    float precioBruto=200;
    float precioDescuento=aplicarDescuento(precioBruto);
    printf("Descuento: %.2f\n",precioDescuento);

    char palabra[20]="hola mundo";
    char caracter='o';
    printf("Match caracteres: %d\n",contarCaracteres(palabra,caracter));

    Notebook notebookArray[TAM]=
    {
        {100,"AMD1","lenovo",12000},
        {101,"INTEL I3","asus",15000},
        {102,"INTEL I5","lenovo",20000}
    };

    ordenarMarcas(notebookArray,TAM);

    for(int i=0;i<TAM;i++)
    {
        printf("%s\n",notebookArray[i].marca);
    }


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

int ordenarMarcas(Notebook *array, int size)
{
    if(size<0)
    {
        printf("Tamanio invalido\n");
        return 1;
    }
    Notebook aux;
    for(int i=0;i<TAM-1;i++)
    {
        for(int j=i+1;j<TAM;j++)
        {
            int comparacion=strcmp(array[i].marca,array[j].marca);
            if(comparacion>0)
            {
                aux=array[i];
                array[i]=array[j];
                array[j]=aux;
            }
            else
            {
                if(comparacion==0){
                    if(array[i].precio>array[j].precio)
                    {
                        aux=array[i];
                        array[i]=array[j];
                        array[j]=aux;
                    }
                }
            }
        }
    }
    return 0;
}
