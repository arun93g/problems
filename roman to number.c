#include <stdio.h>
#include<string.h>


int romanToInt(char *s){


    char roman[]={'M','D','C','L','X','V','I'};
    int number[]={1000,500,100,50,10,5,1};
    int len1=strlen(s),output=0,current,next;

    for(int i=0;s[i]!='\0';i++)
    {
        for(int j=0;j<7;j++)
        {
            if(s[i]==roman[j])
                current=number[j];
            if(s[i+1]==roman[j])
            next =number[j];


        }

        if(next>current)
        output-=current;
        else
        output+=current;
    }
   int index=0;



return output;

}
int main()
{
    char str[10];
    printf("enter the roman letter : ");
    scanf("%s",str);
    int total = romanToInt(&str);
    printf("Roman letter in number is : ");
    printf("%d",total);
    return 0;
}
