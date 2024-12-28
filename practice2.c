//The program is to check whether the number is positive, negative or zero.//
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a > 0)
    {
        printf("%d is a positive number\n", a);
    }
    else if (a < 0)
    {
        printf("%d is a negative number\n", a);
    }
    else
    {
        printf("The number is zero\n");
    }
    return 0;
}