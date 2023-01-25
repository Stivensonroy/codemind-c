#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int m;
        scanf("%d",&m);
        char s[100];
        scanf("%s",s);
        int c=0;
        for(int i=0;i<m;i++)
        {
            for(int j=i;j<m;j++)
            {
                if(s[i]=='1' && s[j]=='1')
                {
                    c++;
                }
            }
        }
        printf("%d
",c);
    }
}