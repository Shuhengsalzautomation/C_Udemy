#include <stdio.h>
#include <stdlib.h>

int hasNeighbors(int *arr,int size)
{
    int i;
    for(i =1;i<size-1;i++)
    {
      if(arr[i]==arr[i-1]+arr[i+1])
        {return 1;}
    }
    return 0;
}

int main()
{   int arr1[] = {1,4,3,4,5,6};
    int result = hasNeighbors(arr1,6);
    printf("result:%d\n",result);
    return 0;
}