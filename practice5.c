//This program will print the numbers from 1 to 20 except the numbers which are divisible by 3.//
#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 20; i++)
    {
        if (i % 3 == 0)

        {
            continue;
        }
        printf("%d", i);
        if (i < 20)
            printf(",");
    }
    return 0;
}