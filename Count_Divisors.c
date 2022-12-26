#include<stdio.h>
int main(){
    int I,r,k;
    int c=0;
    scanf("%d%d%d",&I,&r,&k);
    for(int i=I;i<=r;i++){
        if(i%k==0){
            c++;
        }
    }
    printf("%d",c);
}