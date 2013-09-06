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

int polinodromo (char c[]) // char * c ( seria lo mismo) "ejecicio de vector"
{
    int len, i;
   // char caux[];//un auxiliar para guardar los datos originales
    len=strlen(c);
    while (c[i]!='\0' && i<((len-1)/(2)))
           {
           if  (c[i]== c[(len-1)-i])
            i++;
            }
    if (i==((len-1)/2))
        return 1;
    else
        return 0;

}

