#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
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

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_5>gcc 5_2.c -o myexe

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_5>myexe
Enter number
8
1       2       3       4       5       6       7       8
C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_5>
*/


