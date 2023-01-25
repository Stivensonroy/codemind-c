#include<stdio.h>
int sd(int n)
{
    int r,c=0,c1=0,t;
    t=n;
    while(n)
    {
        r=n%10;
        n=n/10;
        c++;
        if(r==0)
        {
            break;
        }
        if(t%r==0)
        {
            c1++;
        }
    }
    if(c==c1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int m,n,i;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        if(sd(i))
        {
            printf("%d ",i);
        }
    }
}
