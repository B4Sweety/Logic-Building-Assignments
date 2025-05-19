#include <stdio.h>
#include <stdbool.h>

int MultDigits(int iNo)
{
    int iDigit = 0, iMult = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit != 0)
        {
            iMult = iMult * iDigit;
        }
        iNo = iNo / 10;
    }
    return iMult;
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

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_10>gcc 10_4.c -o myexe

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_10>myexe
Enter number :
1018
8

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_10>myexe
Enter number :
9440
144

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_10>myexe
Enter number :
2395
270

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_10>myexe
Enter number :
922432
864

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_10>
*/