#include<stdio.h>
int main()
{
    int n,i,arr[100000],r,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        m=arr[i];
        r=0;
        while(m>0)
        {
            r=r*10+m%10;
            m/=10;
        }
        if(r==arr[i])
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
    
}