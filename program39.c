#include<stdio.h>

void Diplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt >= 0; iCnt--)
    {
        printf("%d\t",iCnt);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;
    printf("please enter frequency :",&iValue);
    scanf("%d",&iValue);

    Diplay(iValue);

    return 0;
}