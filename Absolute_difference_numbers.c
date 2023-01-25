#include<stdio.h>
#include<math.h>
int rev(long long int n)
{
    int r=0;
    while(n!=0)
    {
        r=r*10+n%10;
        n=n/10;
    }
    return r;
}
int main()
{
    long long int n,r;
    int m,u=0,z=0,k;
    scanf("%lld%d",&n,&m);
    k=m;
    r=rev(n);
    while(m--)
    {
        u=u*10+n%10;
        n=n/10;
    }
    int u1=rev(u);
    while(k--)
    {
        z=z*10+r%10;
        r=r/10;
    }
    printf("%d",abs(u1-z));
}
