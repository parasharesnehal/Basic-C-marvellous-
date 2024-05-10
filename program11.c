#include<stdio.h>
#include<stdbool.h>
/*
    Algorithm 
    START
        accept one number
        If the number is greater than equal to 30 and less than equal to 50 
        then display the message as number is in range 
        else 
        display the message as number os not in the range 
    STOP
*/
bool CheckRange(int iNo)
{
    if ((iNo >=30) && (iNo <= 50))
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
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number: ");
    scanf("%d", &iValue);

    bRet = CheckRange(iValue);
    if(bRet== true)
    {
        printf(" %d is the range of 30 - 50 \n",iValue);
    }
    else
    {
        printf(" No %d is not in the range of 30 - 50 \n",iValue);
    }

    return 0;
}