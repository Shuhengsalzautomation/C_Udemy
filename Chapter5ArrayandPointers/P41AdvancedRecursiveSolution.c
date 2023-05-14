#include <stdio.h>
#include <stdlib.h>

int checkIsSortedRecursive(int *arr,int size,int *isReallySorted)
{
    int result;
    if (size==1)
    {
        *isReallySorted =1;
        return 1;
    }
    result = checkIsSortedRecursive(arr,size-1,isReallySorted);
    if(result!=0&&arr[size-1]==arr[size-2])
    {
        *isReallySorted=0;
    }
    if(result!=0&&arr[size-1]<arr[size-2])
    {
        *isReallySorted=0;
        return 0;
    }
    return result;
}

int main()
{
    int valuesArr[] = {1,2,5,7,10};
    int isReallySortedFlag;
    int result;

    result = checkIsSortedRecursive(valuesArr,5,&isReallySortedFlag);

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