#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=21-a-b;
    if(c>10){
        printf("-1");
    }
    else{
        printf("%d",c);
    }
}