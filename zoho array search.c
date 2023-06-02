#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char arr[5][5]= {{'w','e','l','c','o'},{'m','e','t','o','z'},{'o','h','o','c','o'},{'r','p','o','r','a'},{'t','i','o','n',' '}};
    char str[3]="too";
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            char z=toupper(arr[i][j]);
            printf("%c     ",z);
        }
        printf("\n");

    }



    int temp=0;
    int k=0;  //start of sub string
    for(int i=0; i<25; i++)
    {
        if(str[k]==arr[0][i])
        {
            k++;

            temp++;
            if(k==1)
            printf("Start index:<%d,%d>\n",k,i-5);
            if(k==3)
            printf("End index:<%d,%d>\n",k,i-15);
            i+=4;
        }

    }


}
