/*
statement:-accept percentage of the student from the user and display if fail, 3rd, 2nd, 1st, with distinction.
*/
#include<stdio.h>
#include<stdbool.h>

bool DisplayResult( float fMarks)
{
    if((fMarks>=0.0f) && (fMarks<35.0f))
    {
        return false;
    }
    else
    {
        return true;
    }
}


int main()
{
    float fValue =0.0f;
    bool bRet= false;

    printf("Please enter your number :");
    scanf("%f",&fValue);

    bRet = DisplayResult(fValue);
    if(bRet== true)
    {
        printf("Student is passed \n",fValue);
    }
    else
    {
        printf("Student is failed \n",fValue);
    }

    return 0;
}