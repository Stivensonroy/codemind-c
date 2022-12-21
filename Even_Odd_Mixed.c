#include<stdio.h>
int main(){
    int n,r,c=0,ev=0,od=0;
    scanf("%d",&n);
    while(n!=0){
        r=n%10;
        c++;
        if(r%2==0){
            ev++;
        }
        else if(r%2!=0){
            od++;
        }
        n=n/10;
    }
    if(c==ev){
        printf("Even");
    }
    else if(c==od){
        printf("Odd");
    }
    else{
        printf("Mixed");
    }
}