// Accept n numbers and return numbers with 3 digits

#include <stdio.h>
#include <stdlib.h>

void Display(int Arr[],int iLength )
{
    int iCnt = 0;
    
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] >= 100) && (Arr[iCnt] <= 999))
        {
            printf("%d \n",Arr[iCnt]);
        }
                 
    }    
   
}
int main()
{
    int iSize = 0, iCnt = 0;
    
    int *p = NULL;

    printf("Enter the number of elements\n");
    scanf("%d",&iSize);

    

    p = (int *)malloc(iSize * sizeof(int));

    if( p == NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter %d elements \n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    Display(p,iSize);
    
    free(p);

    return 0;
}