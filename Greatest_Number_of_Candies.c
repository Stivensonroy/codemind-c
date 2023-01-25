#include<stdio.h>
int max(int *arr,int n)
{
    int maxium=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>maxium)
        {
            maxium=arr[i];
        }
    }
    return maxium;
}
int main()
{
    int n,k;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    int ma=max(a,n);
    for(int i=0;i<n;i++)
    {
        if(a[i]+k>=ma)
        {
            printf("True ");
        }
        else
        {
            printf("False ");
        }
    }
}