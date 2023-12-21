#include<stdio.h>
#include<string.h>
main()
{
	int i,count=0,n;
	char name[1000];
	
	printf("Enter Of Character = ");
	gets(name);
	n=strlen(name);
	
	
	printf("Reverse String = %s",strrev(name));
	
	for(i=0;i<n;i++)
	{
		if(name[i]==name[n-i-1])
		count++;
	}
	if(count==i)
	{
		printf("\nString is Palindrome");
	}
	else
	{
		printf("\nString is Not Palindrome");
	}
	
}