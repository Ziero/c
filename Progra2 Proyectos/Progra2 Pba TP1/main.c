#include <stdio.h>
#include <stdlib.h>
#include "..\..\Progra2 Archivos\fecha.h"
#include "..\..\Progra2 Archivos\utilitarios.h"
#include "..\..\Progra2 Archivos\numeros.h"
int main()
{
    const char opciones[][30]={"NFVMQ",
                               "Numeros",
                               "Fechas",
                               "Vectores",
                               "Matrices",
                               "Salir"};
    char op;
    do{
        op=menu(opciones, "Programa de Prueba del TP1");
        switch(op){
            case 'N': funcion_numeros(); pausa(""); break;
            case 'F': printf("\nEligio opcion F"); pausa(""); break;
            case 'V': printf("\nEligio opcion V"); pausa(""); break;
            case 'M': printf("\nEligio opcion M"); pausa(""); break;
        }
    } while(op!='Q');
    pausa("fin del programa");
    return 0;
}
