#include <stdio.h>
#include <stdbool.h>

int CountOdd(int iNo)
{
    int iDigit = 0, iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit % 2 != 0)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = CountOdd(iValue);

    printf("%d\n", iRet);

    return 0;
}

/*

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_10>gcc 10_2.c -o myexe

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_10>myexe
Enter number :
2395
3

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_10>myexe
Enter number :
1018
2

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_10>myexe
Enter number :
-1018
2

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_10>myexe
Enter number :
8462
0

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_10>

*/