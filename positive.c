#include <stdio.h>

int main()
{
    	int n;
	printf("enter the number");
	scanf("%d",&n);
	if(n==0)
	printf("Zero");
	else
	if(n<0)
	printf("Negative");
	else
	printf("Positive");

    return 0;
}
