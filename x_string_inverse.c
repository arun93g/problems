#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   char str[30];
   int n,i,j,k;
   printf("ENTER THE STRING");
   scanf("%s",&str);
    n=strlen(str);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j||j==n-i-1)
            {
                printf("%c ",str[j]);
            }

            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
