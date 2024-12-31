#include <stdio.h>
int main()
{ int i,n,sum=0;
    printf("Input a number to get the summation from 1 to n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if (i%2==0)
        {
            sum=sum-i;
        }
        else
        {
            sum=sum+i;
        }
    }
    printf("The summation from 1 to %d is :%d\n",n,sum);
    return 0;
}