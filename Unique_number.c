#include<stdio.h>
int main()
{
    int zero,one,two,three,four,five,six,seven,eight,nine,n,r;
    scanf("%d",&n);
zero=0;
one=0;;
two=0;
three=0;
four=0;
five=0;
six=0;
seven=0;
eight=0;
nine=0;
while(n)
{
    
    r=n%10;
    if(r==0)
        zero+=1;
    else if(r==1)
        one+=1;
    else if(r==2)
        two+=1;
    else if(r==3)
        three+=1;
    else if(r==4)
        four+=1;
    else if(r==5)
        five+=1;
    else if(r==6)
        six+=1;
    else if(r==7)
        seven+=1;
    else if(r==8)
        eight+=1;
    else
        nine+=1;
    n=n/10;
}
if(zero<2 && one<2 && two<2 && three<2 && four<2 && five<2 && six<2 && seven<2 && eight<2 && nine<2)
    printf("Unique Number");
else
    printf("Not Unique Number");
}
