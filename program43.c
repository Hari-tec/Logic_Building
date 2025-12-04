#include<stdio.h>


int main()
{
    int iValue1, iValue2;

    printf("Enter First no :\n");
    scanf("%d",&iValue1);

    
    printf("Enter Second no :\n");
    scanf("%d",&iValue2);

    if(iValue1 % iValue2 == 0)
    {
        printf("It is completely divisible\n");
    }
    else
    {
        printf("It is not divisible");
    }

    return 0;
}