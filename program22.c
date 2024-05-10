/*
Problem Statement:WAP to print "jay hanuman" 5 times. 
*/
#include<stdio.h>
void Display(int n)
{
  int iCnt;
  for (iCnt=1; iCnt<=n; iCnt++)
  {
    printf("Jay Hanuman..\n");
  }
}

int main()
{
  int iValue;
  printf("Enter the number of time you want to display the text\n");
  scanf("%d", &iValue);
  Display(iValue);
  return 0;
}
