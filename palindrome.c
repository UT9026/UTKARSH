#include<stdio.h>
void main()
{
	int n,sum=0,remainder,temp;
	printf("enter num.");
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
		remainder=n%10;
		sum=sum*10+remainder;
		n=n/10;
	}
	n=temp;
	if(n==sum)
	{
		printf("palindrome");
	}
	else
	printf("not palindrome");
	
}
