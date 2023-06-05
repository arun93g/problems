#include <stdio.h>
#include<string.h>

int main()
{
    int len1,len2,temp=0,z=0;
    char str1[1000],str2[100];

    printf("Enter the sentence : ");
    scanf("%[^\n]%*c",str1);
    printf("\n");
    printf("Enter the word to find in the sentence : ");
    scanf("%s",str2);
    printf("\n");

    len1=strlen(str1);
    len2=strlen(str2) ;


    for(int i=0; i<len1; i++)
    {
        int find_index=0,moving_index=i;
        for(int j=0; j<len2; j++)
        {
            if(str2[find_index]==str1[moving_index])
            {
                find_index++;
                moving_index++;
            }
            else
            {
                break;
            }

            if(find_index==len2)
            {
                //printf("%c_",str1[m]);
                if((str1[moving_index]==' '||str1[moving_index]=='\0')&&str1[moving_index-len2-1]==' '||str2[moving_index-len2]==str1[z]&&z==0)
                {
                    temp++;
                    z++;
                }
            }
        }
    }
    printf("\nThe word \"%s\" present %d times in the string\n",str2,temp);
    return 0;
}


