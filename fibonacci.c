#include<stdio.h>
int main()
{
    int i,n=0,n1=1,n2,nu;
    scanf("%d",&nu);
    printf("%d %d ",n,n1);
    for(i=2;i<nu;i++)
    {
        n2=n+n1;
        printf("%d ",n2);
        n=n1;
        n1=n2;
    }
}
