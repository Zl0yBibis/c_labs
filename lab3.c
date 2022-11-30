#include <stdio.h>
#include <math.h>

int main()
{
    double h;
    double f;
    double c;
    printf("Enter h ");
    scanf("%lf", &h);
    if ( h==0 )
        return 0;
    double x = -1.5;
    c=roundf(x*100)/100;
    while(c<=1.5)
    {
        if (c>=-1.5 && c<=0)
        {
            f = (x*x-2*x*x*x)*cos(x*x);
            printf("%lf",x);
            printf(" %lf\n",f);
            x=x+h;
            c=roundf(x*100)/100;
        }
        if (c>0 && c<=1.5)
        {
            f = (exp(sin(2*x)));
            printf("%lf",x);
            printf(" %lf\n",f);
            x=x+h;
            c=roundf(x*100)/100;
        }
    }
    return 0;
} 