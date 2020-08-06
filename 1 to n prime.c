#include<stdio.h>
void main()
{
	int n,m,i,cnt;
	printf("\nenter the number:");
	scanf("\n%d",&m);
	for(n=1;n<=m;n++)
	{
		cnt=0;
		for(i=1;i<=n;i++)
		{
			if(n%i==0)
			{
				cnt++;
			}
		}
		if(cnt==2)
		{
			printf("\n%d",n);
		}
	}
	
	
	
}
