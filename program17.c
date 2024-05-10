/*
statement:-accept percentage of the student from the user and display if fail, 3rd, 2nd, 1st, with distinction.
0 to 35         fail                     (35 IS EXCLUSIVE)
35 to 50        PASS                     (50 IS EXCLUSIVE)  
50 to 60        SECOND CLASS             (60 IS EXCLUSIVE)
60 to 75        FIRST CLASS              (75 IS EXCLUSIVE))           
75 to 100       WITH DISTINCTION         (100 IS INCLUSIVE)
*/
#include<stdio.h>

//User defined macro
#define RET_INVALID -1
#define RET_FAIL 1
#define RET_PASS 2
#define RET_SECCLASS 3
#define RET_FIRSTCLASS 4
#define RET_DISTINCTION 5

int DisplayResult( float fMarks)
{
    if((fMarks < 0.0f) || (fMarks > 100.0f)) // FILTER
    {
       return RET_INVALID ;
    }
    if((fMarks >=0.0f) && (fMarks < 35.0f))
    {
      return RET_FAIL ;
    }
    else if((fMarks >= 35.0f) && (fMarks < 50.0f))
    {
      return RET_PASS ;
    }
    else if((fMarks >=50.0f) && (fMarks < 60.0f))
    {
      return RET_SECCLASS ;
    }
    else if((fMarks >=60.0f) && (fMarks< 75.0f))
    {
      return RET_FIRSTCLASS ;
    }
    else if((fMarks >=75.0f) && (fMarks > 100.0f))
    {
      return RET_DISTINCTION ;
    }
}



int main()
{
    float fValue =0.0f;
    int iRet= 0;

    printf("Please enter your percentage :");
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
    else if(iRet == RET_SECCLASS)
    {
        printf("Student is having secong class \n",fValue);
    }
    else if(iRet == RET_FIRSTCLASS)
    {
        printf("Student is having firstclass \n",fValue);
    }
    else if(iRet == RET_DISTINCTION)
    {
        printf("Student is having distinction \n",fValue);
    }


    return 0;
}