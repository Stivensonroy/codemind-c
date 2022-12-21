#include<stdio.h>
int main(){
    int n,s;
    scanf("%d",&n);
    while(n!=-1){
        s=n*n;
        printf("%d
",s);
        scanf("%d",&n);
    }
}