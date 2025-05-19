#include<stdio.h>
#include<stdbool.h>

int CountTwo(int iNo)
{
    int iDigit = 0, iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 2)
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
    scanf("%d",&iValue);

    iRet = CountTwo(iValue);

    printf("%d\n",iRet);

    return 0;
}

/* 

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_9gcc 9_3.c -o myexe

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_9myexe
Enter number :
2395
1

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_9myexe
Enter number :
1018
0

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_9myexe
Enter number :
9000
0

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_9myexe
Enter number :
922432
3

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_9>

*/