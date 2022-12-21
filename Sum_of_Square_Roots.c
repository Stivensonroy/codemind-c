#include<stdio.h>
#include<math.h>
int main(){
    int a,b;
    float s=0;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++){
        s=s+sqrt(i);
        
    }
    printf("%.2f",s);
}