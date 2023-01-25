#include<stdio.h>
int main()
{
    int n,k,x,y,kt,b,a,t;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    kt=k*x;
    b=x*(n-k);
    a=y*(n-k);
    if(a>b)
    {
        t=kt+b;
        printf("%d",t);
    }
    else
    {
        t=kt+a;
        printf("%d",t);
    }
}
