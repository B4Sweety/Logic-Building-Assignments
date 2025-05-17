#include<stdio.h>

void Number(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo <= 50)
    {
        printf("small\n");
    }
    else if((iNo > 50) && (iNo <= 100))
    {
        printf("medium\n");
    }
    else if(iNo > 100)
    {
        printf("large\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}


/*

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_6>gcc 6_1.c -o myexe

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_6>myexe
Enter number
75
medium

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_6>myexe
Enter number
50
small

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_6>myexe
Enter number
100
medium

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_6>myexe
Enter number
101
large

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_6>

*/


