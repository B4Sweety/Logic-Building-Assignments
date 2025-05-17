#include<stdio.h>

double CircleArea(float fRadius)
{
    float PI = 3.14f;
    double dArea = 0.0;

    dArea = PI * fRadius * fRadius;

    return dArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is : %f",dRet);

    return 0;
}