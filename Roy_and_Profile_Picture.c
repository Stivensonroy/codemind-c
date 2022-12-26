#include<stdio.h>
int main(){
    int I,n,w,h;
    scanf("%d%d",&I,&n);
    for(int i=1;i<=n;i++){
        int w,h;
        scanf("%d%d",&w,&h);
        if(w<I||h<I){
            printf("UPLOAD ANOTHER
");
        }
        else if(w==h){
            printf("ACCEPTED
");
        }
        else{
            printf("CROP IT
");
        }
    }
}