#include "utilitarios.h"
#include <stdio.h>

// funciones
char menu(const char opc[][30], const char*titulo)
{
    char op=pedir_opcion (opc,titulo,"elija titulo\n");
    while (!strchr (opc[0],op))
        op=pedir_opcion(opc,titulo, "opcion erronea, ingresela nuevamente");
        system("cls");

    return op;
}

char pedir_opcion(const char opc[][30], const char* titulo, const char*msj)
{
    int cant,i ; char op;
    printf("\n\n\t %s \n",titulo);
    cant=strlen(opc[0]);
    for(i=0;i<cant;i++)
        printf("\n\t %c  %s",opc[0][i],opc[i+1]);
    printf("\n\n %s", msj);
    fflush(stdin);
    scanf("%c",&op);
    op=toupper(op); //lleva a mayuscula
    return op;

}
void pausa(const char *msj)
{
    if(*msj)
        printf("\n%s", msj);
    printf("\nPulse Enter para continuar...");
    fflush(stdin);
    scanf("%*c");
}

void funcion_numeros()
{
    const char opcionesNumero[][30]={"1234V",
                               "ejercicio1",
                               "ejercicio2",
                               "ejercicio3",
                               "ejercicio4",
                               "Volver"
                               };
    char op;
    do{
        op=menu(opcionesNumero, "Menu de ejercicios numericos del TP1");
        switch(op){
            case '1': ejercicio1(); pausa(""); break;
            case '2': ejercicio2(); pausa(""); break;
            case '3': ejercicio3(); pausa(""); break;
            case '4': ejercicio4(); pausa(""); break;
        }
    } while(op!='V');
    pausa("Menu principal");

}
void funcion_fechas()
{
    const char opcionesNumero[][30]={"123V",
                               "ejercicio14",
                               "ejercicio15",
                               "ejercicio16",
                               "Volver"
                               };
    char op;
    do{
        op=menu(opcionesNumero, "Menu de ejercicios con fechas del TP1");
        switch(op){
            case '1': ejercicio14(); pausa(""); break;
            case '2': ejercicio15(); pausa(""); break;
            case '3': ejercicio16(); pausa(""); break;
        }
    } while(op!='V');
    pausa("Menu principal");

}
void funcion_vectores()
{
    const char opcionesNumero[][30]={"123V",
                               "ejercicio",
                               "ejercicio",
                               "ejercicio",
                               "Volver"
                               };
    char op;
    do{
        op=menu(opcionesNumero, "Menu de ejercicios con fechas del TP1");
        switch(op){
            case '1': ejercicio14(); pausa(""); break;
            case '2': ejercicio15(); pausa(""); break;
            case '3': ejercicio16(); pausa(""); break;
        }
    } while(op!='V');
    pausa("Menu principal");
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

