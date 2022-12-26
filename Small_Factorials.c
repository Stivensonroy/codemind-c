#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int x;
        scanf("%d",&x);
        int fac=1;
        for(int j=1;j<=x;j++)
        {
            fac=fac*j;
        }
        printf("%d
",fac);
    }
}