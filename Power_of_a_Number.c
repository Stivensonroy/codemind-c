#include<stdio.h>
#include<math.h>
int main(){
    int x,y,m;
    scanf("%d%d%d",&x,&y,&m);
    int a=pow(x,y);
    int b=a%m;
    printf("%d",b);
}
