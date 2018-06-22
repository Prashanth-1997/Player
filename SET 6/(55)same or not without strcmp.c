#include<stdio.h>
#include<conio.h>
int main()
{
    char namea[10],nameb[10];
    int i,j,count=0;
    scanf("%s %s",namea,nameb);
    for(i=0,j=0;namea[i]!='\0',nameb[i]!='\0';i++,j++)
    {
        if(namea[i]==nameb[i])
        {
            count=1;
        }
        else
        {
            printf("no");
            count=0;
            break;
        }
    }
    if(count==1)
    {
    printf("yes...both strings are the same");
    }
   return 0;
}
