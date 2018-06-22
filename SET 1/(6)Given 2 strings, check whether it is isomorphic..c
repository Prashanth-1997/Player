#include <stdio.h>
#include <string.h>
int main(void)
{
char a[1000],b[1000];
int i,j,x,y,targ=0;
scanf("%s %s",a,b);
int m=strlen(a);
int n=strlen(b);
if(m==n)
{
	for(i=0;i<m;i++)
	{
		for(j=i+1;j<m;j++)
		{
			x=a[i]-a[j];
			y=b[i]-b[j];
			if(x==y)
			{
				targ=1;
			}
			else
			{
				targ=0;
				break;
			}
		}
	}
}
if(targ==1)
{
	printf("yes");
}
else
{
	printf("NO");
}
	return 0;
}
