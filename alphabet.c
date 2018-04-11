#include<stdio.h>

void main()
{
	int i,f=0;
	char k;
	char a[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','w','x','y','z'};
	printf("enter the character ");
	scanf("%c",&k);
	 for(i=0;i<=26;i++)
	 {
	 	if(a[i]==k)
	 	f=1;
	 }
	 if(f==1)
	 printf("Alphabet");
	 else
	 printf("NO");
	 
}
