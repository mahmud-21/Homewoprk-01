#include <stdio.h>
int main()
{
    int i, n, x = 0;
    printf("Enter any number to get it's sqaure value from 1 to n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {  {
            x = i * i;
    }

        printf("%d,", x);
        
    }
    return 0;
}
