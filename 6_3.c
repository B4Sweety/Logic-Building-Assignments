#include<stdio.h>
#define ERR_INVALID -1

int Factorial(unsigned int iNO)
{
    int iCnt = 0;
    unsigned long iFact = 1;

    if(iNO < 0)         //      filter
    {
        return ERR_INVALID;
    }

    for(iCnt = iNO; iCnt >= 1; iCnt--)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    unsigned int iValue = 0;
    unsigned long iRet = 0;

    printf("Enter number : \n");
    scanf("%u",&iValue);

    iRet = Factorial(iValue);

    if(iRet == ERR_INVALID)
    {
        printf("Invalid input\n");
    }
    else
    {
        printf("Factorial is %lu\n ",iRet);
    }

    return 0;
}

//  Input   :   5
// Output   :   1 * 2 * 3 * 4 * 5 = 120