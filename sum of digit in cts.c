#include<stdio.h>

void printDigitSum(int *arr, int LEN)
{


    int num,remainder,quotient,sum;
    for(int i=0; i<LEN; i++)
    {
        sum=0;
        num=arr[i];


        while(num>0)
        {
            remainder=num/10;;
            quotient=num%10;
            sum+=quotient;
            num=num/10;
        }
        printf("%d",sum);
        if(i<LEN-1)
        {
            printf(",");
        }



        }

}

int main()
{
    int n;
    printf("enter the number of interger : ");
    scanf("%d",&n);
    printf("\n");
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("enter integer %d : ",i+1);
        scanf("%d",&a[i]);
    }
    int length=sizeof(a)/sizeof(a[0]);
    printf("\nthe sum of digits : ");
    printDigitSum(a,length);
    return 0;


}


