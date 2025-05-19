#include<stdio.h>

int  DisplayDigit(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;
    }
    

}

int main()
{
    int iValue = 0;
    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;
}

/* 

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_9gcc 9_1.c -o myexe

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_9myexe
Enter number :
65478
8
7
4
5
6

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_9myexe
Enter number :
-1018
8
1
0
1

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_9myexe
Enter number :
9000
0
0
0
9

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_9>

*/