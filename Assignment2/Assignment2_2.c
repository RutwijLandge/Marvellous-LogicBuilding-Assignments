//2. Accept one number from user and print that number of * on screen.
#include <stdio.h>
void Display(int iNo)
{
    
    if(iNo < 0)
    {
        iNo = -iNo;  // updater
    }

    while (iNo > 0)
    {
        printf(" * ");
        iNo--;
    }
}

int main()
{
    int iValue = 0;
    printf("Enter Number \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}