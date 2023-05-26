#include<stdio.h>
#include<stdlib.h>

int main()
{
    int small,size,size1,xo=0;
    printf("enter the size of the matrix : ");
    scanf("%d",&size);
    printf("enter the size of the matrix : ");
    scanf("%d",&size1);
    char matrix[size1][size];
    if(size<size1)  // small is the smaller side of the matrix
        small=size;
    else
        small=size1;
    int top=0,bottom=size1-1,left=0,right=size-1;

    int sub_small=small/2;   // sub_small is used to stop the while loop. if smaller side of the matrix is 3, 2 times loop should execute, if smaller side is 5 3 times loop should execute.
    while(small>sub_small)
    {

        for(int i=left; i<=right; i++)
        {
            if(xo%2==0)
                matrix[top][i]='X';   // at even position x will be stored

            else
                matrix[top][i]='O';   // at odd position o will be stored

        }
        for(int i= top; i<=bottom; i++)
        {
            if(xo%2==0)
                matrix[i][right]='X';

            else
                matrix[i][right]='O';
        }
        for(int i=right; i>=left; i--)
        {
            if(xo%2==0)
                matrix[bottom][i]='X';

            else
                matrix[bottom][i]='O';
        }
        for(int i=bottom; i>=top; i--)
        {
            if(xo%2==0)
                matrix[i][left]='X';

            else
                matrix[i][left]='O';
        }

        left++;
        top++;
        right--;
        bottom--;
        small--;
        xo++;
    }

    for(int i=0; i<size1; i++)
    {
        for(int j=0; j<size; j++)
        {
            printf("%c ",matrix[i][j]);

        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}
