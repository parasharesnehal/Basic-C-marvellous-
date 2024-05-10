//Problem Statement : Accept 1 no. from user and check whether no. is even or odd
#include<stdio.h>
#include<stdbool.h>
//Algorithm
/*
START
    Accept one number
    Divide that no. BY 3
    If rem is 0
    Divide that no. BY 5
    If rem is 0
    Then print no is divisible by 3 and 5
    Or display that it is not divisible by 3 or 5 
STOP

*/

////////////////////////////////////////////
///  Function name: CheckDivisible
///  Description:   Used to check whether the no is divisible by 3 and 5
///  Input :        Integer
///  Output :       Boolean
///  Author :       Snehal Parashare
///  Date :         16 APril 2024
////////////////////////////////////////////


bool CheckDivisible(unsigned int iNo)
{
    if(((iNo % 3)==0) && ((iNo % 5)==0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    unsigned int iValue = 0;    //variable for input
    bool bRet = false;
    printf("Enter the no: \n");
    scanf("%d",&iValue);

    bRet = CheckDivisible(iValue);

    if(bRet == true)
    {
        printf("%d is divisible by 3 and 5 \n",iValue);
    }

    else
    {
        printf("%d is not divisible by either 3 or 5 or both \n",iValue);
    }


    return 0;
}