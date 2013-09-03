#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}

int esfechaalida(const t_fecha) calcular dias.
{
    if(f.a>= 1601)
    {
        if (f.m>=1&&f.m<=12)
        {
            if(f.d>=1&&f.d<=cantdiasmes(f.m,f.a))
                return 1;
        }
    }
    return 0;
}

int cantdiasmes (int m, int a) // calcular cantidad de dias
{
    staticint vdias[12]={31,28,31,30,31,30,31};
    if (esbisiesto(a)&&m==2)
        return 29;
    return vdias[m-1];
}

int bisiesto(int a) // calcuar anios bisiestos
{
    if (a%4==0&&a%100!=0||a%400=0)
        return 1;
    return 0;



}
