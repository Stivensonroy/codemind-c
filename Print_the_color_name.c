#include<stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    if(c=='V'||c=='v'){
        printf("Violet");
        
    }
    else if(c=='I'||c=='i'){
        printf("Indigo");
    }
    else if(c=='B'||c=='b'){
        printf("Blue");
    }
    else if(c=='G'||c=='g'){
        printf("Green");
    }
    else if(c=='Y'||c=='y'){
        printf("Yellow");
    }
    else if(c=='O'||c=='o'){
        printf("Orange");
    }
    else if(c=='R'||c=='r'){
        printf("Red");
    }
    else{
        printf("-1");
    }
}