#include <stdio.h>
#include <stdbool.h>

int MultDigits(int iNo)
{
    int iDigit = 0, iSum1 = 0, iSum2 = 0, iDiff = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0 )
        {
            iSum2 = iSum2 + iDigit;
        }
        else
        {
            iSum1 = iSum1 + iDigit;
        }
        iDiff = iSum2 - iSum1;
        iNo = iNo / 10;
    }
    return iDiff;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);

    printf("%d\n", iRet);

    return 0;
}

/*

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_10>gcc 10_5.c -o myexe

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_10>myexe
Enter number :
2395
-15

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_10>myexe
Enter number :
1018
6

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_10>myexe
Enter number :
8440
16

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_10>myexe
Enter number :
5733
-18

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_10>
*/