#include<stdio.h>
int main(){
    float bs,hra,da,pf;
    scanf("%f%f%f",&bs,&hra,&da);
    pf=0.12*bs;
    float gs=bs+hra+da+pf;
    printf("%.2f
",pf);
    printf("%.2f",gs);
}