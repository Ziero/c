#include<stdio.h>
#include "funcionesdepractica.h"

int cargadedatos( * t_persona)
{
    printf("ingrese los datos de la persona\n\n dni, apellido, nombre, fecha (dd/mm/aaaa) y pero\n");
    scanf("%ld %[^\n] %[^\n] %d/%d/%d %f \n",persona.dni,
                persona.apellido,
                persona.nombre,
                persona.fnacimiento.dia,
                persona.fnacimiento.mes,
                persona.fnacimiento.anio,
                persona.peso);
}
