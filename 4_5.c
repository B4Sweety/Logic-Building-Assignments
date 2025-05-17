#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0, iNonFactSum = 0, iFactSum = 0 , iDiff = 0 ;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if( iNo % iCnt == 0)
        {
            iFactSum = iFactSum + iCnt;    
        }
        else if( iNo % iCnt != 0)
        {
            iNonFactSum = iNonFactSum + iCnt;
        }
        iDiff = iFactSum - iNonFactSum;
    }
   return iDiff;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("Summation of all non factors are : %d\n",iRet);

    return 0;
}


/*

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_4>gcc 4_5.c -o myexe

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_4>myexe
Enter number
12
Summation of all non factors are : -34

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_4>myexe
Enter number
10
Summation of all non factors are : -29

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_4>

*/


