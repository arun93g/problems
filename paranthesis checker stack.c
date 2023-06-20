#include <stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 100

char temp[100];

struct stack
{
    int top;
    char arr[MAX];

} s;

void push(char t)
{
    //printf("entered");
    s.arr[++s.top]=t;
}

void pop()
{
    s.top--;
}

int check_pair(char st1,char st)
{
    return ((st=='('&&st1==')')||(st=='{'&&st1=='}')||(st=='['&&st1==']'));
}

int paranthesis_checker(char *one)
{
    int n=strlen(one);

    for(int i=0; i<n; i++)
    {
        if(one[i]=='('||one[i]=='['||one[i]=='{')
        {
            push(one[i]);
        }
        else
        {
            if(check_pair(one[i],s.arr[s.top]))
            {
                pop();
            }
        }
    }
    if(s.top==-1)
            return 1;
     else
        return 0;


}

int main()
{
    s.top=-1;
    char str[100];
    printf("Enter an expression : ");
    scanf("%s",str);

    for(int i=0,j=0; i<strlen(str); i++)
    {
        if(str[i]=='['||str[i]==']'||str[i]=='{'||str[i]=='}'||str[i]=='('||str[i]==')')
        {
            temp[j++]=str[i];
        }
    }

    int len=strlen(temp);
    if(len%2!=0)
    {
        printf("\nInvalid Expression");
    }
    else
    {
    if(paranthesis_checker(temp))
    {
        printf("\nvalid Expression");
    }
    else
    {
        printf("\nInvalid Expression");
    }
    }
    return 0;
}
