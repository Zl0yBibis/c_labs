#include <stdio.h>

int nod(int x, int y)
{
    int dv;
    if (x==y) return x;
    int d = x-y;
    if (d<0)
    {
        d=-d;
        dv=nod(x,d);
    }
    else
        dv=nod(y,d);
    return dv;
}

int nok(int x, int y)
{
    return x*y/nod(x,y);
}

int cyl(int x,int y)
{
    int n=0;
    while (n%x!=0 && n%y!=0)
    {
        n=n+1;
    }
    return n;
}

int main()
{
    int x, y;
    scanf("%u", &x);
    scanf("%u", &y);
    int res=nok(x,y);
    int res2=cyl(x,y);
    printf("%d\n",res);
    printf("%d\n",res2);
}