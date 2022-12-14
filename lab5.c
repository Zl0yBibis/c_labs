
#include <stdio.h>

/*unsigned int rec(unsigned int a, unsigned int b)
{
    unsigned int n=1;
    if (n%a==0 && n%b==0) return 1;
    return n=n+1, rec(a,b);
}

int main()
{
    unsigned int a;
    unsigned int b;
    scanf("%u", &a);
    scanf("%u", &b);
    unsigned int res=rec(a,b);
    printf("%d",res);
}
*/
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

int nod(int x, int y)
{
    int n;
    while (n%x!=0 && n%y!=0)
    {
        
    }
}

int main()
{
    int x, y;
    scanf("%u", &x);
    scanf("%u", &y);
    int res=nok(x,y);
    printf("%d\n",res);
}
