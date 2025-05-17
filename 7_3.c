#include<stdio.h>
#define ERR_INVALID -1

unsigned long EvenFactorial(unsigned int iNo)
{
    int iCnt = 0;
    unsigned long iFact = 1;

    if(iNo < 0)     
    {
        return ERR_INVALID;
    }

    for(iCnt = 2; iCnt <= iNo; iCnt += 2)   
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{
    unsigned int iValue = 0;
    unsigned long iRet = 0;

    printf("Enter number: \n");
    scanf("%u", &iValue);

    iRet = EvenFactorial(iValue);

    if(iRet == ERR_INVALID)
    {
        printf("Invalid input\n");
    }
    else
    {
        printf("Even Factorial is %lu\n", iRet);
    }

    return 0;
}
