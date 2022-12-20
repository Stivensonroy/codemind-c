#include<stdio.h>
#include<math.h>
int main(){
    float x,y,hrs,min,angle;
    scanf("%f:%f",&x,&y);
    hrs=30*x+0.5*y;
    min=6*y;
    angle=abs(hrs-min);
    if(angle>180){
        angle=360-angle;
    }
    printf("%.1f",angle);
}