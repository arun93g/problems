#include<stdio.h>

int main()
{
    int a[4][4]= {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
     //int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    //int a[5][5]= {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};

    int s1=3,s2=3,n=4;

    int z=n;
    int top=0,left=0,right=n-1,bottom=n-1;

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(a[i][j]<10)
            printf("%d  ",a[i][j]);
            else
                printf("%d ",a[i][j]);
        }
        printf("\n");
    }
      printf("\nTHE MATRIX IN SPRIAL PATTERN :");
    while(n>0)
    {

        for(int i=left; i<right; i++)
        {
            printf("%d ",a[top][i]);

        }
        for(int i=top; i<bottom; i++)
        {
            printf("%d ",a[i][right]);
        }
        for(int i=right; i>left; i--)
        {
            printf("%d ",a[bottom][i]);
        }
        for(int i=bottom; i>top; i--)
        {
            printf("%d ",a[i][left]);
        }
        if(n==1&&z%2==1)
        {
            int r=z/2;
            printf("%d ",a[r][r]);
        }
        right--;

        top++;
        left++;
        bottom--;
        n--;

    }

}
