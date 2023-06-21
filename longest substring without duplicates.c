#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int total=0;

bool duplicate(char *str,int start,int end)
{
    char temp[100];
    int len=strlen(str),idx=0,check=end-start+1;

    for(int i=start;i<=end;i++)
    {
        int j;
        for(j=start;j<=i;j++)
        {
            if(str[i]==str[j])
                break;
        }
        if(i==j)
        {
            temp[idx++]=str[i];
        }
    }
    temp[idx]='\0';

    int len1=strlen(temp);
    //printf("\n%s %d %d ",temp,check,len1);

    if(check==len1)
        return true;
    else
        return false;
}

int permutation(char *str,int start ,int end)
{
    int len=strlen(str),start_idx;
    for(int i=0;i<len;i++)
    {
        for(int j=i;j<len;j++)
        {
            if(duplicate(str,i,j))
            {
                int max_len=j-i+1;
                if(max_len>total)
                {
                    total=max_len;
                    start_idx=i;
                }
            }
        }
    }
    //printf("\n-----%d->%d----",start_idx,total);
    return start_idx;
}



int main()
{
    char str[100];
    printf("Enter a string : ");
    scanf("%s",str);

    int start=permutation(str,0,strlen(str)-1);

        printf("\nLongest substring without duplicate characters are : ");
        for(int i=start;i<total+start;i++)
        {
            printf("%c",str[i]);
        }

}
