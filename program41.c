#include<stdio.h>

void Diplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 2; iCnt <= iNo; iCnt += 2)
    {
        printf("%d\t",iCnt);


    }

    printf("\n");
}

// Time complexity : O(N/2)

int main()
{
    int iValue = 0;
    printf("please enter frequency :");
    scanf("%d",&iValue);

    Diplay(iValue);

    return 0;
}