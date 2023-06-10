#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

char r[1001];

int total=0;

bool duplicate(char *str,int start,int end,int size)
{
    char temp[100];
    int len=strlen(str),idx=0;
    for(int i=0; i<len; i++)
    {
        int j;
        for(j=0; j<=i; j++)
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
    //printf("%s -> %ld\n",temp,strlen(temp));
    if(strlen(temp)==size)
    {
        // printf("start -> %d , end -> %d\n",start,end);
        return true;
    }
    else
        return false;
}

int pattern(char *str,int start, int end,int size)
{
    int index=0,start_idx,end_idx,max_len=0;
    char r[1001];
    for(int i=start ; i<=end ; i++)
    {
        // printf("%c",str[i]);
        r[index++]=str[i];
    }
    r[index]='\0';
    //printf(" - %d --- ",end-start+1);
    if(duplicate(r,start,end,size))
    {

        max_len=end-start+1;
//         start_idx=start;
//         end_idx=end;
        // printf("%d-%d->%d\n",start_idx,end_idx,max_len);

    }
    return max_len;
    //printf(" %s\n",duplicate(r,start,end));
}

char *permutation(char *s,int size)
{
    int len=strlen(s),max_len=0,num,start=0,end=-1;

    for(int i=0; i<len; i++)
    {
        for(int j=i; j<len; j++)
        {
            //total=j-i+1;
            num=pattern(s,i,j,size);
            if(num>total)
            {
                total=num;
                start=i;
                end=j;
                //printf("------%d-%d->%d----\n",start,end,total);
            }

        }

        // printf("\n");
    }
    //printf("------%d-%d->%d----\n",start,end,total);
    for(int i=start,j=0; i<=end; i++,j++)
    {
        // printf("%c",s[i]);
        r[j]=s[i];
        if(i==end)
            r[j+1]='\0';
    }



    return r;

}



int main()
{
    //char str[]="aabbcacaccacccdabababdc";
    char s[1001],str[1001];
    printf("Enter the string : ");
    scanf("%s",s);
    strncpy(str,s+1,strlen(s));
    str[strlen(s)]='\0';
    //printf("%s",str);

    int size=s[0]-'0';
    //printf("%d",size);
    // printf("\nEnter the number of unique characters to be presented : ");
    // scanf("%d",&size);
    printf("\nThe longest substring with %d charcter is : %s\n",size,permutation(str,size));
    return 0;

}
