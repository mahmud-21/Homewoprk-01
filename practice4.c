//This program will take marks as input and will give the grade according to the marks.//
#include <stdio.h>
int main()
{
    int a;
    printf("Input marks (out of 100) :");
    scanf("%d", &a);
    if (a >= 90 && a <= 100)
    {
        printf("Grade : A");
    }
    else if (a >= 80 && a < 90)
    {
        printf("Grade : B");
    }
    else if (a >= 70 && a < 80)
    {
        printf("Grade : C");
    }
    else if (a < 70)
    {
        printf("Grade : F(Fail)");
    }
    else
    {
        printf("Invalid Input Marks");
    }
    return 0;
}