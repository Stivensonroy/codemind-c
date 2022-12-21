#include<stdio.h>
int main(){
    int n,r;
    scanf("%d%d",&n,&r);
    for(int i=1;i<=12;i++){
        printf("%d x %d = %d
",n,i,n*i);
    }
}