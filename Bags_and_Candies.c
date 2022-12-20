#include<stdio.h>
int main(){
    int n,k,m;
    scanf("%d%d%d",&n,&k,&m);
    int a=k*m;
    int b=n/a;
    if(n%a==0){
        printf("%d",b);
    }
    else{
        printf("%d",b+1);
    }
}