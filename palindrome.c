#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

bool palindrome(char *s,int start , int end)
{
    for(int i=0;i<(end+1)/2;i++)
    {
        if(s[start+i]!=s[end-i])
            return false;

    }
    return true;
}


int main()
{
    char str[]="haanaah";
    int len=strlen(str);

    if(palindrome(str,0,len-1))
    {
        printf("\"%s\" is palindrome",str);
    }
    else
        printf(" \"%s\" is not palindrome",str);

    return EXIT_SUCCESS;
}
