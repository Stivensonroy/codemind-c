#include <stdio.h>
int main()
{
    int N,i,sum=0;
    int a[N];
    scanf("%d",&N);
 for(i=0;i<N;i++)
 {
     scanf("%d",&a[i]);
 }
 for(i=0;i<N;i++)
 {
     if(a[i]%2!=0)
     {
         sum=sum+a[i];
     }
     }
     printf("%d",sum);
}