#include <stdio.h>
#include <string.h>

int main()
{
	char name[100];
	int i,j,n,temp;
	scanf("%s",name);
	n=strlen(name);
	for(i=n-1,j=0;i>n/2,j<n/2;i--,j++)
	{
	    temp=name[i];
	    name[i]=name[j];
	    name[j]=temp;
	}
	printf("%s",name);
	return 0;
}
