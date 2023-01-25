#include<stdio.h>
int main()
{
    int n,m,p,l,o;
    scanf("%d",&n);
    m=n%10;
    n=n/10;
    p=n%10;
    n=n/10;
    l=n%10;
    n=n/10;
    o=n%10;
    n=n/10;
    if(o==6)
    {
        o=9;
    }
    else if(l==6)
    {
        l=9;
    }
    else if(p==6)
    {
        p=9;
    }
    else if(m==6)
    {
        m=9;
    }
    printf("%d%d%d%d",o,l,p,m);
    
}