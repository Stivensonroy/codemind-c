#include<stdio.h>
int main(){
    int m;
    scanf("%d",&m);
    int hrs=m/60;
    int min=(m%60)%60;
    printf("%d Hour(s) %d Minute(s)",hrs,min);
}