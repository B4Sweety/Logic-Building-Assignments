#include<stdio.h>

int MultFact(int iNo)
{
    int iMult = 1, iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iMult = iMult * iCnt;
        }
    }

    return iMult;

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("It's multiplication of factors are : %d\n",iRet);

    return 0;
}


/*
C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_4>gcc 4_1.c -o myexe

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_4>myexe
Enter number
12
It's multiplication of factors are : 144

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_4>myexe
Enter number
13
It's multiplication of factors are : 1

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_4>myexe
Enter number
10
It's multiplication of factors are : 10

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_4>

*/


