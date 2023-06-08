#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void duplicate(char str[])
{
     for(int i=0;str[i];i++)
    {
        for(int j=i+1;str[j];j++)
        {
            if(str[i]==str[j])
            {
                for(int k=j;str[k];k++)
                {
                    str[k]=str[k+1];
                }

                j=j-1;
            }
        }
    }

    int len=strlen(str);
    str[len]='\0';
}


int main()
{
    char str[100];
    printf("Enter the word : ");
    scanf("%s",str);
    printf("\n");
    duplicate(str);

    printf("duplicate character removed : %s\n",str);

    return EXIT_SUCCESS;

}
