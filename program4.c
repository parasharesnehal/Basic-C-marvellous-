//Problem statment: accept two no.'s from user and perform  its addition
//float datatype

#include<stdio.h>

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    float fResult = 0.0;

    printf("Enter first no.: \n");
    scanf("%f",&fValue1);

    printf("Enter second no.: \n");
    scanf("%f",&fValue2);

    fResult = fValue1 + fValue2;

    printf("Addition is : %f\n",fResult);

    return 0;
}