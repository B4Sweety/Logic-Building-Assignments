#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iDistance = 0, iKtoM = 1000;

    iDistance = iNo * iKtoM;

    return iDistance;

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance : ");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("%d",iRet);
}