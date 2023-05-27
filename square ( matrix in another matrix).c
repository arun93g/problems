#include<stdio.h>

int main()
{
    int n,m,big_mat,small_mat;
    printf("enter the size of the bigger matrix :");
    scanf("%d",&n);
    printf("enter the size of the smaller matrix : ");
    scanf("%d",&m);
    int a[n][n];
    int b[m][m];
    int flag=0,k=0,temp=m,diff_two_matrix;
    big_mat=n*n;
    small_mat=m*m;
    diff_two_matrix=n-m;

//i/p  for matrix 1(big matrix)
printf("\nEnter the %d values for matix 1\n",big_mat);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

//printing first matix
printf("\nThe values in matrix 1\n");
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(a[i][j]<10)
            {
                printf("%d  ",a[i][j]);
            }
            else
                printf("%d ",a[i][j]);

        }
        printf("\n");

    }
//i/p  for matrix 2(small matrix)
printf("\nEnter the %d values for matix 2\n",small_mat);
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<m; j++)
        {
            scanf("%d",&b[i][j]);
        }
    }


//printing first matix
printf("\nThe values in matrix 2\n");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(a[i][j]<10)
            {
                printf("%d  ",b[i][j]);
            }
            else
                printf("%d ",b[i][j]);

        }
        printf("\n");

    }

//condition checking for matrix present

    for(int j=0; j<big_mat; j++)
    {


        if(a[0][j]==b[0][k])
        {
            flag++;
            k++;
            if(flag==small_mat)
            {
                printf("---------------------\n");
                printf("| matrix is present |\n");
                printf("---------------------");
                return 1;
            }

        }
        else
        {
            k=0;
            flag=0;
        }
        if(flag==temp)
        {

            j+=diff_two_matrix;
            temp+=m;
        }
    }

    if(flag!=small_mat)
    {
        printf("-------------------------\n");
        printf("| matrix is not present |\n");
        printf("-------------------------");
    }

    return 0;
}

