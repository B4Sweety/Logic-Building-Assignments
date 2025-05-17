#include<stdio.h>

void NonFact(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
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

    NonFact(iValue);

    return 0;
}


/*

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_4>gcc 4_3.c -o myexe

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_4>myexe
Enter number
12
5       7       8       9       10      11
C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_4>myexe
Enter number
13
2       3       4       5       6       7       8       9       10      11 12
C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_4>myexe
Enter number
10
3       4       6       7       8       9
C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_4>
*/


