//This program will take a number as input and check if it is divisible by 5 or not.//
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a % 5 == 0)
    {
        printf("%d is divisible by 5\n", a);
    }
    else
    {
        printf("%d is not divisible by 5\n", a);
    }
    return 0;
}