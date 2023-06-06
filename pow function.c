#include<stdio.h>
#include<stdlib.h>

double pow(double num,double pw)
{
    double ans=num;
    if(pw>0){
    for(int i=1;i<pw;i++)
    {
        ans=ans*num;
    }
    return ans;
    }
    else
    {
       for(int i=1;i<-pw;i++)
    {
        ans=ans*num;
    }
    return 1/ans;
    }
}



int main()
{
    double num,pw,ans;

    printf("enter the number : ");
    scanf("%lf",&num);
    printf("enter the power : ");
    scanf("%lf",&pw);

    ans=pow(num,pw);

    printf("\npow(%.0lf,%.0lf) is : %0.4lf",num,pw,ans);

    return EXIT_SUCCESS;
}
