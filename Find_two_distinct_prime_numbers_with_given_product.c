#include<stdio.h>
int p(int n)
{
    int i;
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n,j,i,c=0;
    scanf("%d",&n);
    if(n<2)
    {
        printf("-1");
    }
    for(i=2;i<n;i++)
    {
        if(p(i))
        {
            if(n%i==0)
            {
                c++;
                printf("%d ",i);
            }
        }
    }
    if(c==0)
    {
        printf("-1");
    }
}