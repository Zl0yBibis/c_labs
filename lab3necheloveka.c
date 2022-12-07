#include <stdio.h>
#include <math.h>

int main()
{
    double h;
    double f;
    double c;
    double x = -1.5;
    double fun(double a, double b)
    {
        printf("%lf",x);
        printf(" %lf\n",f);
        x=a+b;
        c=roundf(x*1000)/1000;
        return 0;
    }
    printf("Enter h ");
    scanf("%lf", &h);
    if ( h==0 )
        return 0;
    c=roundf(x*10)/10;
    while(c<=1.5)
    {
        if (c>=-1.5 && c<=0)
        {
            f = (x*x-2*x*x*x)*cos(x*x);
            fun(x, h);
        }
        if (c>0 && c<=1.5)
        {
            f = (exp(sin(2*x)));
            fun(x, h);
        }
    }
    return 0;    
}