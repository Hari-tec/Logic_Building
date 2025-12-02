/////////////////////////////////////////////////////////////////////////////////
//
//  Required header files
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>                                   // For inout output
#include<stdbool.h>                                 // For bool datatype

/////////////////////////////////////////////////////////////////////////////////
//
//  FunctionName :      CheckEvenOdd      
//  Discription :       It is used to check the even odd 
//  Input :             integer
//  Output :            bool
//  Author :            Hariom Dhanraj Tirkamte
//  Date ;              10/10/2025
//
/////////////////////////////////////////////////////////////////////////////////
bool CheckEvenOdd(int iNo)
{
    int iRem = 0;

    iRem = iNo % 2;

    if(iRem == 0)
    {   return true;    }
    else
    {   return false; }
}   // End of CheckEvenOdd
int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number:");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {printf("%d Is even number\n",iValue);}
    else
    {printf("%d Is odd number\n",iValue);}

    return 0;
}       // End of main