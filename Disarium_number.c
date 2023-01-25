#include<stdio.h>
#include<math.h>
int l(int n)
{
    int h=0;
    while(n!=0)
    {
        h++;
        n/=10;
    }
    return h;
}
int main()
{
    int s=0,r,m,le,t;
    scanf("%d",&m);
    le=l(m);
    t=m;
    while(t>0)
    {
        r=t%10;
        s=s+(int)pow(r,le);
        t=t/10;
        le--;
    }
    if(m==s)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}

