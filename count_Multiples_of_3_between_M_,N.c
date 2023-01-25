#include<stdio.h>
int main()
{
    int a,b,i;
    int n=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(i%3==0)
        {
            n++;
        }
    }
    printf("%d",n);
}