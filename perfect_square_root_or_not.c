#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(n==i*i)
        {
            printf("True");
            return 0;
        }
    }
    printf("False");
}