#include<stdio.h>
float Addition(    
        float fNo1,              // First input 
        float fNo2               //Second input 
              )
{
    float fAns= 0.0;            //Variable to store result
    fAns = fNo1 + fNo2;
    return fAns;
}

int main()
{
    float fValue1 = 0.0,        //Variable to store first input
    fValue2 = 0.0;              //Variable to store second input
    float fResult = 0.0;        //Variable to store return value

    printf("Enter first no.: \n");
    scanf("%f",&fValue1);

    printf("Enter second no.: \n");
    scanf("%f",&fValue2);

    fResult = Addition(fValue1, fValue2);

    printf("Addition is : %f\n",fResult);

    return 0;
}