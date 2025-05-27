#include<stdio.h>

void Pattern(int iNo)
{
    char ch = '\0';
    int iCnt = 0;

    for(iCnt = 1, ch = 'A'; iCnt <= iNo; iCnt++,ch++)
    {
        printf("%c\t",ch);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}


/* 
    Input   :         5
    Output  :   A   B   C   D   E  
*/