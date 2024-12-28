#include <stdio.h>
int main()
{
    int n;
here:
    for (int i = 0; i <= 1; i++)
    {
        printf("Enter a number :");
        scanf("%d", &n);
        if (n < 0)
        {
            break;
        }
        else
        {
            goto here;
        }
    }
    printf("Negative number is detected");
    return 0;
}