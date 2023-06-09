#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>

char r[1001];

static bool palindrome(char *s,int start,int end)
{
    int num;
    num=end-start+1;

    for(int i=0;i<num/2;i++)
    {

        if(s[start+i]!=s[end-i])
            return false;
    }
    return true;
}

char *substring(char *s)
{
    int slen,max_len,len,max_idx;
    slen=strlen(s);

    for(int i=0; i<slen; i++)
    {
        for(int j=i+max_len; j<slen; j++)
        {
            if(palindrome(s,i,j))
            {
                len=j-i+1;

            if(len>max_len)
            {
                max_len=len;
                max_idx=i;
            }
            }
        }
    }

    strncpy(r,s+max_idx,max_len);
    r[max_len]='\0';
    return r;
}

int main()
{
    //char s[]="mynameisiemanymaaddadfagdhka";
    char s[100];
    printf("Enter the string : ");
    scanf("%s",s);
    printf("\nThe longest palindrome substring is : %s\n",substring(s));
    return EXIT_SUCCESS;
}
