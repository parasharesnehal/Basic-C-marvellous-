//Problem Statement:WAP to print 1,2,3,4 
#include<stdio.h>
void Display(int iNo)
{
  int iCnt=0;
  iCnt=1; 
  while( iCnt <= iNo)
  {
  printf("%d\n",iCnt);
  iCnt++;
  }

}

int main()
{
  int iValue=0;
  printf("Enter the numbers to be printed ");
  scanf("%d", &iValue);
  Display(iValue);
  return 0;
}
