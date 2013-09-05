#include "numeros.h"
#include <stdio.h>
#include <math.h>

void ejercicio1()
{
    int a;
    printf("introdusca un numero para calcular su factorial\n");
    scanf("%d",&a);
    a=factorial(a);
    printf("el factorial es \t%d",a);
}
void ejercicio2()
{
    int a,b;
    float r;
    printf("ingrese los numeros a calcular la combinatoria\n");
    scanf("%d%d",&a,&b);
    r=combinatoria(a,b);
    if (r!=0)
        printf("la combinatoria es \t%f",r);
    else
        printf("Combinatoria erronea\n\n");
}
void ejercicio3()
{
    float a,b,r;
    printf("ingrese la exponencial que quiere calcular y su tolerancia\n");
    scanf("%f%f",&a,&b);
    r=exponencial3(a,b);
    printf("la exponncial es \t%f",r);
}
void ejercicio4()
{
    double a,b,r;
    printf("ingrese un valor para calcular su raiz cuadrada\n");
    scanf("%lf%lf",&a,&b);
    r=raizcuadrada4(a,b);
    printf("la raiz cuadrada es \t%f",r);
}
int factorial(int n)
{
    int fac=1;
    while(n>0)
    {
        fac*=n;
        n--;
    }
    return fac;
}

float combinatoria (int a, int b)
{
    int fa,fb,res=a-b,fr;
    float r=0;
    if (a>=b && b>=0)
    {
        fa=factorial(a);
        fb=factorial(b);
        fr=factorial(res);
        r=fa/(fb*fr);
    }
return r;
}
int potencia (int b,int e)
{
    int i,r=1;
    for(i=0;i<e;i++)
        r*=b;
    return r;
}
float exponencial3 (float x,float tol)
{
    float r=1,d,res=0,i=1,t;
    do{
        t=(((float)potencia(x,i))/factorial(i));
        r+=t;
        printf("%f\n",r);
        i++;
    } while (t>=tol);
    return r;
}
double raizcuadrada4(double x, double tolerancia)
{
    double diferencia=0.0f,t0=1.0f,r=0.0f;
    do
    {
        r=(0.5f)*(t0+x/t0);
        diferencia=r-t0;
        t0=r;
    } while(fabs(diferencia)>tolerancia);
    return r;
}


int esFibonacci(int n)
{
    int a =0;
    int b =1;
    if (n==a || n == b)return 1;
    int c = a+b;
    while(c<=n)
    {
        if(c==n)return 1;
        a=b;
        b=c;
        c=a+b;
    }
    return 0;
}



