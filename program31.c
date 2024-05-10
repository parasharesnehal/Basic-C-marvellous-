//problem statement: check whether the no. is divisible by 4
#include<stdio.h>
#include<stdbool.h>

bool Checkdivisible(int iNo)
{
    if(iNo % 4 == 0)
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

    printf("enter the the number\n");
    scanf("%d", &iValue);

    bRet= Checkdivisible(iValue);

    if(bRet == true)
    {
        printf("%d is divisible by 4\n",iValue);
    }
    else
    {
        printf("%d is not divisible by 4\n",iValue);
    }

    return 0;
}