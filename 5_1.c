#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$\t*\t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}


/*

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_5>gcc 5_1.c -o myexe

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_5>myexe
Enter number
5
$       *       $       *       $       *       $       *       $       *
C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_5>myexe
Enter number
3
$       *       $       *       $       *
C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_5>myexe
Enter number
-3
$       *       $       *       $       *
C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_5>

*/


