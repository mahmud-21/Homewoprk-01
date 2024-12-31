//Title: Sum of the reciprocals of the first n natural numbers//
#include <stdio.h>
int main()
{
    int n;
    float sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += 1.0 / i;
    }
    printf("The sum of the reciprocals of the first %d natural numbers is: %f", n, sum);
    return 0;
}