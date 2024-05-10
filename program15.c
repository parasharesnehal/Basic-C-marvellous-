/*
statement:-accept percentage of the student from the user and display if fail, 3rd, 2nd, 1st, with distinction.
*/
#include<stdio.h>

int DisplayResult( float fMarks)
{
    if((fMarks < 0.0f) || (fMarks > 100.0f))
    {
       return 1;
    }
    if((fMarks >=0.0f) && (fMarks > 35.0f))
    {
      return 2;
    }
    else
    {
        return 3;
    }
}


int main()
{
    float fValue =0.0f;
   int iRet= 0;

    printf("Please enter your number :");
    scanf("%f",&fValue);

    iRet = DisplayResult(fValue);
    
    if(iRet == 1)
    {
        printf("input invalid \n",fValue);
    }
    else if(iRet==2)
    {
        printf(" Student is Failed\n",fValue);
    }
    else if(iRet==3)
    {
        printf("Student is Passed \n",fValue);
    }

    return 0;
}