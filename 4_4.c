#include<stdio.h>

int SumNonFact(int iNo)
{
    int iCnt = 0, iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSum = iSum + iCnt;
        }
    }
   
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("Summation of all non factors are : %d\n",iRet);

    return 0;
}


/*


C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_4>gcc 4_4.c -o myexe

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_4>myexe
Enter number
12
Summation of all non factors are : 50

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_4>myexe
Enter number
10
Summation of all non factors are : 37

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_4>

*/


