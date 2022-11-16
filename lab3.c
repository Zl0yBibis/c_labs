#include <stdio.h>
#include <math.h>

int main()
{
    double h;
    double f;
    int s;
    printf("Enter h ");
    scanf("%lf", &h);
    double x = -1.5;
    s = -1.5;
    while (s>=-1.5 && s<=0)
    {
        f = (x*x-2*x*x*x)*cos(x*x);
        printf("%lf",x);
        printf(" %lf\n",f);
        s=s+h;
        x=x+h;
    }
    while (s>0 && s<=1.5)
    {
        f = (exp(sin(2*x)));
        printf("%lf",x);
        printf(" %lf\n",f);
        s=s+h;
        x=x+h;
    }
    return 0;
}
