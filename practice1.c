//This program will take a number as input and will tell whether the number is even or odd.//
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf(" %d is a even number\n", a);
    }
    else
    {
        printf("%d is a odd number\n", a);
    }
    return 0;
}