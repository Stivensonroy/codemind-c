#include<stdio.h>
int main(){
    int h,s,sf;
    scanf("%d%d%d",&h,&s,&sf);
    if(h>50&&s>60&&sf>100){
        printf("10");
    }
    else if(h>50 && s>60){
        printf("9");
    }
    else if(s>60&&sf>100){
        printf("8");
    }
    else if(h>50&&sf>100){
        printf("7");
    }
    else if(h>50||s>60||sf>100 ){
        printf("6");
    }
    else{
        printf("5");
    }
}