#include<stdio.h>
int main()
{
	int first=0,second=1,next=0,number;
	scanf("%d",&number);
	while(number>next)
	{
		next=first+second;
		first=second;
		second=next;
	}
	if(number-first<second-number)
	{
		printf("%d",first);
	}
	else if(number-first==second-number)
	{
		printf("%d %d",first,second);
	}
	else
	{
		printf("%d",second);
	}
}
