#include<stdio.h>

void Diplay()
{
    int iCnt = 0;

    for(iCnt = 5; iCnt >= 1; iCnt--)
    {
        printf("%d\t",iCnt);
    }

    printf("\n");

}

int main()
{
   Diplay();

   return 0;
}