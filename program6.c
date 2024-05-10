///////////////////////////////////////////////////
//
//  Function Name : Addition
//  Description :   Performs addition of 2 floats
//  Input :         Float, Float
//  Author :        Snehal Sanjay Parashare
//  Date :          15/04/2024
/////////////////////////////////////////////////////
#include<stdio.h>
float Addition(float fNo1, float fNo2)
{
    float fAns= 0.0;
    fAns = fNo1 + fNo2;
    return fAns;
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    float fResult = 0.0;

    printf("Enter first no.: \n");
    scanf("%f",&fValue1);

    printf("Enter second no.: \n");
    scanf("%f",&fValue2);

    fResult = Addition(fValue1, fValue2);

    printf("Addition is : %f\n",fResult);

    return 0;
}