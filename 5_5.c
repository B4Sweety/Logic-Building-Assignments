#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt <= (iNo*5); iCnt++)
    {
        if((iCnt % iNo) == 0)
        {
            printf("%d\t",iCnt);
        }     
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}


/*

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_5>gcc 5_5.c -o myexe

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_5>myexe
Enter number
4
4       8       12      16      20
C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_5>

*/


