#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)         // Filter negative input
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt >= 1; iCnt--)  // Count backward
    {
        printf("%d\n", (iNo * iCnt));
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Table(iValue);

    return 0;
}
