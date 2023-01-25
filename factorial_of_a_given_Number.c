#include <stdio.h>
int main()
{
    int a,i;
    int s=1;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        s=s*i;
    }
    printf("%d",s);
}