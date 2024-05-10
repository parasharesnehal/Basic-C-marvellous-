//Problem statement:- accept a number from user, and checck whether it is in between 10-20 
//10 and 20 is inclusive 
#include<stdio.h>
#include<stdbool.h>
bool checkRange(int iNo)
{
    if((iNo>=10) && (iNo<=20))
    {
        return true;
    }
    else 
    {
        return false;
    }
    return 0;
}
int main()
{
  int iValue = 0;
  bool bRet = false;

    printf("Enter your number");
    scanf("%d",&iValue);

    bRet = checkRange(iValue);

    if(bRet == true)
    {
        printf("%d is in the range 10 to 20\n", iValue );
    }
    else
    {
        printf("%d is not in the range 10 to 20\n", iValue );

    }
  return 0;
}