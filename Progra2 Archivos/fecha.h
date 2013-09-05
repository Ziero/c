#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED
typedef struct
{
    int dia;
    int mes;
    int anio;
}t_fecha;
int cantdiasmes(int,int);
int esFechaValida(t_fecha*);
int difDia(t_fecha*,t_fecha*);
int mesMenor(int,int,int,int);
int esBisiesto(int);





#endif // FECHA_H_INCLUDED
