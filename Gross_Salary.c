#include<stdio.h>
int main(){
    float bs,hra,da;
    scanf("%f",&bs);
    if(bs<=10000){
        da=0.8*bs;
        hra=0.2*bs;
        printf("%.2f",bs+da+hra);
    }
    else if(bs<=20000){
        da=0.9*bs;
        hra=0.25*bs;
        printf("%.2f",bs+da+hra);
    }
    else if(bs>20000){
        da=0.95*bs;
        hra=0.3*bs;
        printf("%.2f",bs+da+hra);
    }
}