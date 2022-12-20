#include<stdio.h>
#include<math.h>
int main(){
    int n,s=0,t=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        s=s+i;
        
    }
    for(int j=1;j<=n;j++){
        t=t+pow(j,2);
    }
    int p=s*s;
    printf("%d",abs(p-t));
}