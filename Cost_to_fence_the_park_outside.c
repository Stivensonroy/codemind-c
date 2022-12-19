#include<stdio.h>
int main(){
    int I,b,w,c,Ai,Tc;
    scanf("%d%d%d%d",&I,&b,&w,&c);
    Ai=I*b;
    int A0=((2*w+I)*(2*w+b));
    int A1=A0-Ai;
    Tc=c*A1;
    printf("%d",Tc);
}