#include<stdio.h>
#define N 3
int main(){
    int i,d;
    int c=1;
    int a[N];
    scanf("%d%d%d",&a[0],&a[1],&a[2]);
    for(i=0;i<N;i++){
        c=c*a[i];
        d=(512*c*2)/1024;
        
    }
    printf("%dKB",d);
}