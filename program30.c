#include<stdio.h>

int CalculationTicket(int iAge)
{
    if((iAge >0) && (iAge <=4))
    {
    return 0;
    }
    else if((iAge > 4) && (iAge <= 10))
    {
        return 900;
    }
    else if((iAge > 10) && (iAge <= 50))
    {
        return 2000;
    }
    else if(iAge > 50)
    {
        return 500;
    }
}
int main()
{
    int iValue =0, iRet=0;
    printf("Enter your age :\n");
    scanf("%d", &iValue);

    iRet = CalculationTicket(iValue);
    printf("Your ticket price is : %d\n", iRet);

    return 0;
}
