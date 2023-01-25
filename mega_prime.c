#include<stdio.h>
int main()
{
    int n,dc=0,pc=0,c=0,r,i;
    scanf("%d",&n);
    if(n==1)
    {
        printf("Not Mega Prime");
    }
    for(i=1;i<(n/2);i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
        if(c==1)
        {
            while(n)
            {
              r=n%10;
              dc++;
              if(r==2||r==3||r==5||r==7||r==9)
              {
                  pc++;
              }
              n=n/10;
            }
        }
            if(n==0 && dc==pc)
            {
                printf("Mega Prime");
            }
            else
            {
                printf("Not Mega Prime");
            }
}