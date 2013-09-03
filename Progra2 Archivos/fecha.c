#define esBisiesto(x) (x%4==0&&x%10!=0||x%400==0 ? 1:0) //ESTO ES UNA MACRO


/* int esBisiesto(int a)n                   // SACO SI UN ANIO ES BISIESTO
{                                           // PERO LO HAGO EN LA MACRO
    if(a%4==0&&a%100!=0||a%400==0)
        return 1;
    return 0;
}
*/
int cantdiasmes( int m, int a) // SACO LA CANTIDAD DE DIAS (YA QUE PUEDE VARIAR SEGUN EL MES)
{
        static int vdias[12]={31,28,31,30,31,30,31};
        if(esBisiesto(a)&&m==2)
            return 29;
        return vdias[m-1];
}


typedef  struct{int d,m,a;}t_fecha;

int esFechaValida(const t_fecha * f) //LE PASO POR PUNTERO, PARA PASAR LA COPIA DE UNA DIRECCION DE MEMORIA
{                                      //(LO HACE MAS OPTIMO)
    if(f->a>=1601)
        if(f->m>=1&&f->m<=12)  //APUNTO A LA DIRECCION CON EL "->"
            if(f->d>=1&&f->d<=cantdiasmes)
                return 1;
    return 0;
}
int difDia(const t_fecha *f1, const t_fecha *f2)
{
    int dif=f2->d-f1->d;
    int mcur=f1->m;
    int acur=f1->a;
    while(mesMenor(mcur,acur,f2->m,f2->a))
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
