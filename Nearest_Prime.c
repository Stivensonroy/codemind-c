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
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
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
	if(n-d1>d2-n)
	{
		printf("%d
",d2);
	}
	else
	{
		printf("%d
",d1);
	}
	}
}
