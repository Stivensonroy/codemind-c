#include<stdio.h>
int main()
{
    int m,h,n;
    scanf("%d",&m);
    h=m/60;
    n=m%60;
    printf("%d Hour(s) %d Minute(s)",h,n);
}