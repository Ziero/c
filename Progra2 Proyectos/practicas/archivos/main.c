#include <stdio.h>
#include <stdlib.h>
#include "funcionesdepractica.h"
typedef struct
{
    int dia;
    int mes;
    int anio;
} t_fecha;

typedef struct
{
    long dni;
    char apellido[31];
    char nombre[31];
    t_fecha fnacimiento;
    float peso;
} t_persona;
int main()
{
    t_persona persona;
    FILE * fp;
     printf("ingrese los datos de la persona\n\n dni, apellido, nombre, fecha (dd/mm/aaaa) y pero\n");
    fp=fopen("datos.txt","wt");
    if(!fp)
    {
        printf("fallo");
        exit(1);
    }
    scanf("%ld %[^\n] %[^\n] %d/%d/%d %f \n",persona.dni,
                persona.apellido,
                persona.nombre,
                persona.fnacimiento.dia,
                persona.fnacimiento.mes,
                persona.fnacimiento.anio,
                persona.peso);
    while (persona.dni>0)
    {
        fprintf(fp,"%ld %s %s %d/%d/%d %f \n",persona.dni,
                persona.apellido,
                persona.nombre,
                persona.fnacimiento.dia,
                persona.fnacimiento.mes,
                persona.fnacimiento.anio,
                persona.peso);
        //para archivos de texto fwrite no sirve
       scanf("%ld %[^\n] %[^\n] %d/%d/%d %f \n",persona.dni,
                persona.apellido,
                persona.nombre,
                persona.fnacimiento.dia,
                persona.fnacimiento.mes,
                persona.fnacimiento.anio,
                persona.peso);// cargadedatos(&persona);
    }
    fclose(fp);
    return 0;
}
