#include<stdio.h>
int main(){
    char name[60];
    fgets(name,sizeof(name),stdin);
    puts(name);
}