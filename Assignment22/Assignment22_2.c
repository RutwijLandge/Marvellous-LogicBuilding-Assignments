// Accept one char and check whether it is capital or not

#include <stdio.h>
#include <stdbool.h>

bool ChkCapital(char ch)
{
    
    if(((ch >= 'A') && (ch <= 'Z')) )
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the Character\n");
    scanf("%c",&cValue);

    bRet = ChkCapital(cValue);

    if(bRet == true)
    {
        printf("It is Capital\n");
    }

    else
    {
        printf("It is not Capital\n");
    }

    return 0;
}