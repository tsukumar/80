#include <stdio.h>
#include<string.h>
void main()
{
	char g[10];
	int a,i,j,flag=0;
	printf("enter any string");
	
	scanf("%s",g);
	
	a=strlen(g);
	for(i=0,j=a-1;i<=a/2;i++,j--)
	{
		
		if(g[i]!=g[j])
		{
			printf("not a palindrome");
			flag=1;
			break;
			
		}
	}
	if(flag==0)
	{
		printf("palindrome");
}
}
