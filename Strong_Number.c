#include<stdio.h>
int f(int n)
{
    int i,m=1;
    for(i=1;i<=n;i++)
    {
        m*=i;
    }
    return m;
}
int main()
{
    int n,s=0,k,r,fa;
    scanf("%d",&n);
    k=n;
    while(k!=0)
    {
        r=k%10;
        fa=f(r);
        s+=fa;
        k=k/10;
    }
    if(s==n)
    {
        printf("The number %d is a strong number",n);
    }
    else
    {
        printf("The number %d is not a strong number",n);
    }
}
 