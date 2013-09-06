#include "vectores.h"

void ejercicio22()
{
     int valor, ubicacion,i,t;
    printf("ingrese el valor, su ubicacion\n");
     scanf("%d%d,%d",&valor,&ubicacion);
    int a[20];
    for (i=0;i<20;i++)
    a[i]=0;
    insercionEnVector(                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       &a,valor,ubicacion);
    for (i=0;i<6;i++)
    printf("%d\t",a[i]);
}

int insercionEnVector(int a[],int v,int ubi)
{
    a[ubi]=v;
}
