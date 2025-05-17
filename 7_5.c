#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    unsigned long evenFact = 1, oddFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;  
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            evenFact = evenFact * iCnt;    // Even factorial
        }
        else
        {
            oddFact = oddFact * iCnt;     // Odd factorial
        }
    }

    return evenFact - oddFact;   
}

int main()
{
    int iValue = 0;
    int iResult = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iResult = FactorialDiff(iValue);

    printf("Difference between even and odd factorial is: %d\n", iResult);

    return 0;
}
