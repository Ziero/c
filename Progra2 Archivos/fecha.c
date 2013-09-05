#include "fecha.h"
//#define esBisiesto(x) (x%4==0&&x%10!=0||x%400==0 ? 1:0) //ESTO ES UNA MACRO


 int esBisiesto(int a)                  // SACO SI UN ANIO ES BISIESTO
{                                           // PERO LO HAGO EN LA MACRO
    if((a%4==0) && (a%100!=0) || (a%400==0) )
        return 1;
    return 0;

}


int cantdiasmes( int m, int a) // SACO LA CANTIDAD DE DIAS (YA QUE PUEDE VARIAR SEGUN EL MES)
{
        static int vdias[12]={31,28,31,30,31,30,31,31,30,31,30,31};
        if((esBisiesto(a)==1)&&m==2)
            return 29;
        return vdias[m-1];
}

int esFechaValida(t_fecha * f) //LE PASO POR PUNTERO, PARA PASAR LA COPIA DE UNA DIRECCION DE MEMORIA
{                                      //(LO HACE MAS OPTIMO)
    if(f->anio>=1900 )
        if(f->mes>=1&&f->mes<=12)  //APUNTO A LA DIRECCION CON EL "->"
            if(f->dia>=1&&f->dia<=cantdiasmes(f->mes,f->anio))
                return 1;
    return 0;
}
int difDia( t_fecha *f1,  t_fecha *f2)
{
    int dif=f2->dia-f1->dia;
    int mcur=f1->mes;
    int acur=f1->anio;
    while(mesMenor(mcur,acur,f2->mes,f2->anio))
    {
        dif+=cantdiasmes(mcur,acur);
        mcur++;
        if(mcur==13)
        {
            mcur+1;
            acur++;
        }

     }
     return dif;
}
int mesMenor(int m1,int a1,int m2,int a2)
{
    int n1=a1*100+m1;
    int n2=a2*100+m2;
    return n1<n2; // SI ES VERDADERO DEVUELVE 1, SI NO 0 (EXPRECION BOOLEANA)
}
