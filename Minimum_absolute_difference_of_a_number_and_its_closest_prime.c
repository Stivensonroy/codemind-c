#include<stdio.h>
#include<math.h>
int p(int n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int n,i,d1,d2,d11,d22;
	scanf("%d",&n);
	for(i=n;;i--)
	{
		if(p(i))
		{
			d1=i;
			break;
		}
	}
	for(i=n;;i++)
	{
		if(p(i))
		{
			d2=i;
			break;
		}
	}
	d11=n-d1;
	d22=d2-n;
	if(d11>d22)
	{
		printf("%d",d22);
	}
	else
	{
		printf("%d",d11);
	}
}
