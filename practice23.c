// 22.series print: 1 , 2 , 4 , 8 , 16 , … , 2^n−1//
#include <stdio.h>
int main()
{
    int i, n,x=0;
    printf("Input a number to get the series  :");
    scanf("%d", &n);
    printf("The series from 1 to %d is :\n",n);
    for (i = 1; i <= n; i++){
    {
       x=i*2; 
    }
 printf("%d,",x);
    }
    return 0;
}