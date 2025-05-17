#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}


/*

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_5>gcc 5_3.c -o myexe

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_5>myexe
Enter number
4
-4      -3      -2      -1      0       1       2       3       4
C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_5>

*/


