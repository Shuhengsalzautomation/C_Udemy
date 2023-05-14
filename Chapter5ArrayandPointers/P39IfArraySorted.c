#include <stdio.h>
#include <stdlib.h>

int checkIsSorted(int *arr,int size,int *isReallySorted)
{
    int i;
    *isReallySorted = 1;
    for(i=1;i<size;i++)
    {
        if(arr[i]<=arr[i-1])
        {
            *isReallySorted = 0;
        }
        if(arr[i]<arr[i-1])
        {
            return 0;
        }
        
    }
    return 1;
}

int main()
{
    int valuesArr[] = {1,2,5,7,10};
    int isReallySortedFlag;
    int result;

    result = checkIsSorted(valuesArr,5,&isReallySortedFlag);

    if(result == 1)
        printf("The array is Really Sorted/ Sorted\n");
    else if(result ==0)
        printf("The array is Not sorted at all\n");
    if (isReallySortedFlag==1)
        {
         printf("The array is really sorted\n");
        }
    else if(isReallySortedFlag==0)
        {
            printf("The array is not really sorted\n");
        }      
    return 0;
}