#include<stdio.h>
int main(){
    int n,r,rem,re=0,rev=0;
    scanf("%d",&n);
    int p=n*n;
    while(n!=0){
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    int s=rev*rev;
    while(s!=0){
        rem=s%10;
        re=re*10+rem;
        s=s/10;
    }
    if(re==p){
        printf("True");
    }
    else{
        printf("False");
    }
}