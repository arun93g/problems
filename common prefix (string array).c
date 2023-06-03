#include<stdio.h>
#include<stdlib.h>

int main()
{
    //char *str[]={"arun","aruna","arunac","arunach"};
    //char *str[]={"dog","docecar","car"};
    char *str[]={"flower","flow","flight"};
    int len1=sizeof(str)/sizeof(str[0]);
    //printf("%d",len1);

    char str1[10];  //to store th first string in the array
    char str2[10];  //to store the common letter in the string
    for(int i=0;str[0][i]!='\0';i++)
    {
        str1[i]=str[0][i];
        str1[i+1]='\0';
    }


    for(int i=1;i<len1;i++)
    {
        for(int j=0;str[i][j]!='\0';j++)
        {
            if(str1[j]==str[i][j])
            {
                str2[j]=str[i][j];
                str2[j+1]='\0';
            }
            else
            {
                str2[j]='\0';
                break;
            }
        }
    }
    if(str2[0]=='\0')
    printf("There is no common prefix in the array.\n");
    else
    printf("The common prefix in the given array is : %s\n",str2);

}
