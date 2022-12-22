#include<stdio.h>
int main(){
    int n,r,rev=0;
    scanf("%d",&n);
    int t=n;
    while(n!=0){
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(rev==t){
        printf("True");
    }
    else{
        printf("False");
    }
}