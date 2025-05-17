#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dCelcius = 1.0;

    dCelcius = ((fTemp - 32) * (5.0 / 9.0));

    return dCelcius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenhit : ");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("%.2f",dRet);
}