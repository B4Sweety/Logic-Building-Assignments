#include<stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
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

    OddDisplay(iValue);

    return 0;
}


/*

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_5>gcc 5_4.c -o myexe

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_5>myexe
Enter number
18
1       3       5       7       9       11      13      15      17
C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_5>
*/


