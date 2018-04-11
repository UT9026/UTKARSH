#include<stdio.h>
int main()
{
	int years;
	printf("enter year");
	scanf("%d",&years);
	if(years%4==0)
	{
		if(years%100==0)
		{
			if(years%400==0)
			{
				printf("yes");
			}else printf("no");
		}else
		printf("yes");
	}else 
	printf("No");
}
