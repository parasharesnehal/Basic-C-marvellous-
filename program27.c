//Problem Statement:WAP to print 1,2,3,4 
#include<stdio.h>
void Display(int iNo)
{
  int iCnt=0;
  for(iCnt=1; iCnt<=iNo; iCnt++)
  printf("%d\n",iCnt);
}

int main()
{
  int iValue=0;
  printf("Enter the numbers to be printed ");
  scanf("%d", &iValue);
  Display(iValue);
  return 0;
}
