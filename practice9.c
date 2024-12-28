#include <stdio.h>
int main()
{
    int N;
    printf("Enter any Year and check it (Leap Year or Not):");
    scanf("%d", &N);
    if (N % 4 == 0 && N % 100 != 0 || N % 400 == 0)
        printf("%d is a Leap Year", N);
    else
        printf("%d is not a leap year ", N);
    return 0;
}
