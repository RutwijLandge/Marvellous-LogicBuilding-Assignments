//2. Convert US dollar to INR considering 1$ as 70rs

#include <stdio.h>

int DollarToINR(int iNo)
{
    int iINR = 0;
    iINR = 70 * iNo;

    return iINR;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD\n");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d  \n",iRet);
}
