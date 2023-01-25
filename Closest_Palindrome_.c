#include<stdio.h>
int pal(int num)
{
    int rev=0,temp=num,r;
    while (temp>0)
    {
        r=temp%10;
        rev=(rev*10)+r;
        temp=temp/10;
    }
    if (rev==num)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int a;
    scanf("%d",&a);
    int diff1=0,diff2=0,i,j;
    int pal1,pal2;
    for (i=a+1; i<=10000; i++)
    {
        if (pal(i)==1)
        {
            diff1=i-a;
            pal1=i;
            break;
        }
    }
    for (i=a-1; i>0; i--)
    {
        if (pal(i)==1)
        {
            diff2=a-i;
            pal2=i;
            break;
        }
    }
    if (diff1>diff2)
    {
        printf("%d",pal2);
    }
    else if (diff2==diff1)
    {
        printf("%d %d",pal2,pal1);
    }
    else
    {
        printf("%d",pal1);
    }
    return 0;
}