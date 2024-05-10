//Problem Statement : Accept 1 no. from user and check whether no. is even or odd
#include<stdio.h>
#include<stdbool.h>
//Algorithm
/*
START
    Accept one number
    Divide that no. BY 2
    If rem is 0
    Then display the result as even 
    Or display the result as odd no 
STOP

*/

////////////////////////////////////////////
///  Function name: CheckEvenOdd
///  Description:   Used to checck whether the no is even or odd
///  Input :        Integer
///  Output :       Boolean
///  Author :       Snehal Parashare
///  Date :         16 APril 2024
////////////////////////////////////////////


bool CheckEvenOdd(unsigned int iNo)
{
    if((iNo % 2)==0)
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

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {
        printf("%d is Even number \n",iValue);
    }

    else
    {
        printf("%d is Odd number \n",iValue);
    }


    return 0;
}