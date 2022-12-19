#include<stdio.h>
int main(){
    int x,a,b;
    scanf("%d%d%d",&x,&a,&b);
    if(x>a+2*b){
        printf("Not Qualify");
    }
    else {
        printf("Qualify");
    }
}