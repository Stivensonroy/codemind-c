#include<stdio.h>
int prime(int);
int main(){
    int n1,n2;
    scanf("%d%d",&n1,&n2);
    int x=n1+n2;
    x++;
    while(1){
        if(prime(x)){
            printf("%d",x-n1-n2);
            break;
        }
        x++;
    }
}
int prime(int n){
    int c=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            c++;
        }
    }
    if(c==2){
        return 1;
    }
    else{
        return 0;
    }
    
}