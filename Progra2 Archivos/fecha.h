#ifndef FECHA_H_INCLUDED
#define FECHA_H_INCLUDED
typedef struct
{
    int dia;
    int mes;
    int anio;
}t_fecha;
void ejercicio14();
void ejercicio15();
void ejercicio16();
int cantdiasmes(int,int);
int esFechaValida(t_fecha*);
int difDia(t_fecha*,t_fecha*);
int mesMenor(int,int,int,int);
int esBisiesto(int);
int diasiguientefecha (t_fecha*);
int fechamasNdias(t_fecha * f,int n);




#endif // FECHA_H_INCLUDED
