#include<stdio.h>
#include<math.h>
int main(){
    int n,r,c=0;
    scanf("%d",&n);
    int s=n*n;
    int t=n;
    while(n!=0){
        r=n%10;
        c++;
        n=n/10;
    }
    int p=pow(10,c);
    int rem=s%p;
    if(rem==t){
        printf("Automorphic Number");
    }
    else{
        printf("Not an Automorphic Number");
    }
}