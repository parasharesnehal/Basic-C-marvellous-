/*
statement:-accept percentage of the student from the user and display if fail, 3rd, 2nd, 1st, with distinction.
*/
#include<stdio.h>

//User defined macro
#define RET_INVALID 1
#define RET_FAIL 2
#define RET_PASS 3

int DisplayResult( float fMarks)
{
    if((fMarks < 0.0f) || (fMarks > 100.0f)) // FILTER
    {
       return RET_INVALID ;
    }
    if((fMarks >=0.0f) && (fMarks > 35.0f))
    {
      return RET_FAIL ;
    }
    else
    {
        return RET_PASS;
    }
}


int main()
{
    float fValue =0.0f;
    int iRet= 0;

    printf("Please enter your number :");
    scanf("%f",&fValue);

    iRet = DisplayResult(fValue);
    
    if(iRet == RET_INVALID)
    {
        printf("input invalid \n",fValue);
    }
    else if(iRet == RET_FAIL)
    {
        printf(" Student is Failed\n",fValue);
    }
    else if(iRet == RET_PASS)
    {
        printf("Student is Passed \n",fValue);
    }

    return 0;
}