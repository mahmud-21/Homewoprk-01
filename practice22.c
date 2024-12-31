// 21.series sum: 1^2+2^3+3^2+4^3+......+n^m//
#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("Input a number to get the summation  :");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i * i * i;
        }
        else
        {
            sum = sum + i * i;
        }
    }
    printf("The summation from 1 to %d is :%d\n", n, sum);
    return 0;
}
