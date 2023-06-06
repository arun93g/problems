#include <stdio.h>

int main()
{
    int num, counter = 0;
    printf("enter end of integer order : ");
    scanf("%d", &num);

    printf("\n");
    for (int i = 1; i <= num; i++)
    {
        // printf("%d", i);
         //count the number of characters printed
        int temp = i;
        while (temp != 0)
        {
            counter++;
            temp /= 10;
        }
    }

    printf("\n\nNumber of characters printed: %d\n", counter);
    return 0;
}


