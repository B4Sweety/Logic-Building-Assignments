#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo == 1)
    {
        printf("One\n");
    }
    else if(iNo == 2)
    {
        printf("Two\n");
    }
    else if(iNo == 3)
    {
        printf("Three\n");
    }
    else if(iNo == 4)
    {
        printf("Four\n");
    }
    else if(iNo == 5)
    {
        printf("Five\n");
    }
    else if(iNo == 6)
    {
        printf("Six\n");
    }
    else if(iNo == 7)
    {
        printf("Seven\n");
    }
    else if(iNo == 8)
    {
        printf("Eight\n");
    }
    else if(iNo == 9)
    {
        printf("Nine\n");
    }
    else
    {
        printf("Invalid Number\n");
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

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_6>gcc 6_2.c -o myexe

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_6>myexe
Enter number
9
Nine

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_6>myexe
Enter number
-3
Three

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_6>myexe
Enter number
12
Invalid Number

C:\Users\SWEETY\OneDrive\Desktop\LB Assignment\Assignment_6>

*/


