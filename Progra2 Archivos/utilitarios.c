#include "utilitarios.h"
#include <stdio.h>
#define e=2.71828182846;

// funciones
char menu(const char opc[][30], const char*titulo)
{
    char op=pedir_opcion (opc,titulo,"elija titulo\n");
    while (!strchr (opc[0],op))
        op=pedir_opcion(opc,titulo, "opcion erronea, ingresela nuevamente");

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
    const char opcionesNumero[][30]={"123456789V",
                               "ejercicio1",
                               "ejercicio2",
                               "ejercicio3",
                               "ejercicio4",
                               "ejercicio5",
                               "ejercicio6",
                               "ejercicio7",
                               "ejercicio8",
                               "ejercicio9",
                               "Volver"
                               };
    char op;
    do{
        op=menu(opcionesNumero, "Programa de Prueba del TP1");
        switch(op){
            case '1': ejercicio1(); pausa(""); break;
            case '2': ejercicio2(); pausa(""); break;
            case '3': ejercicio3(); pausa(""); break;
            case '4': ejercicio4(); pausa(""); break;
        }
    } while(op!='V');
    pausa("Menu principal");

}
int polinodromo (char c[]) // char * c ( seria lo mismo)
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

