#include <stdio.h>
int main()
{
    while (1)
    {
        int x, a, b;
        printf("Menu:\n");
        printf("1. Add two numbers\n");
        printf("2. Subtract two numbers\n");
        printf("3. Exit\n");
        printf("Select your desired operation: ");
        scanf("%d", &x);
        if (x == 1)
        {
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("The sum of the two numbers is: %d\n", a + b);
        }
        else if (x == 2)
        {
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("The difference of the two numbers is: %d\n", a - b);
        }
        else if (x == 3)
        {
            printf("Exit");
            break;
        }
        else
        {
            printf("");
        }
    }
    return 0;
}