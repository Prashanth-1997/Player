#include<stdio.h>
int main()
{
	char s[50];
	int i,j,r,l,c=0,max=0;
	printf("Enter the string:");
	scanf("%[^\n]s",s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(s[i]==s[j])
			{
				c++;
			}
			if(c>max)
			{
				r=s[i];
				max=c;
			}
		}
	}
	printf("%c",r);
	return 0;
}
