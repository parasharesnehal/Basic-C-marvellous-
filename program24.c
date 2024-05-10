//Problem Statement:WAP to print "jay hanuman" 5 times. 
#include<stdio.h>
void Display(int iNo)
{
  int iCnt = 0;
  
  iCnt=1;                       //1
  while ( iCnt<=iNo)              //2                                     
  {
    printf("Jay Hanuman..\n");  //4
    iCnt++ ;                       //3
  }
}

int main()
{
  int iValue=0;
  printf("enter the number of times you want to display the text");
  scanf("%d",&iValue);
  Display(iValue);
  return 0;
}
