// Title: Multiplication Table//
#include <stdio.h>
int main()
{
    while (1)
    {
        int i, n, x = 1;
        printf("Enter any number to get it's multiplication Table: ");
        scanf("%d", &n);
        for (i = 1; i <= 10; i++)
        {
            x = n * i;
            printf("%d * %d = %d\n", n, i, x);
        }
    }
    return 0;
}
