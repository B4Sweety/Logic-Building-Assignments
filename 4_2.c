#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = (iNo / 2); iCnt >= 1; iCnt--)
    {
        if(iNo % iCnt == 0)
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

    FactRev(iValue);

    return 0;
}


/*

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_4>gcc 4_2.c -o myexe

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_4>myexe
Enter number
12
6       4       3       2       1
C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_4>myexe
Enter number
13
1
C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_4>myexe
Enter number
10
5       2       1
C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_4>

*/


