#include<stdio.h>
#include<stdbool.h>

bool CheckZero(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return true;
        }
        iNo = iNo / 10;
    }
    return false;
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);

    if(bRet == true)
    {
        printf("It contains zero\n");
    }
    else
    {
        printf("There is no zero\n");
    }

    return 0;
}

/* 

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_9gcc 9_2.c -o myexe

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_9myexe
Enter number :
2395
There is no zero

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_9myexe
Enter number :
1098
It contains zero

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_9myexe
Enter number :
9000
It contains zero

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_9myexe
Enter number :
10687
It contains zero

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_9>

*/