#include <stdio.h>
int main()
{
    int i, n, fact = 1;
    printf("Enter any number to get it's factorial: ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        fact = fact * i;
    }
    printf("Factorial of %d is :%d", n, fact);
    return 0;
}
