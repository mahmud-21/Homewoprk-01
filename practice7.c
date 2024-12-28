#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers :");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("The number %d is greater than %d", a, b);
    }
    else
    {
        printf("The number %d is greater than %d", b, a);
    }
    return 0;
}