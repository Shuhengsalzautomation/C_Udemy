#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
/*
Write a function that receives an array.
The function should find and return the "second smallst" in the array. 
*/
int findSecondSmallest(int *arr,int size)
{
    int i;
    int min1 = arr[0];
    int min2;
    if(arr[1]<min1)
        {
        min1 = arr[1];
        min2 = min1;
        }
    else
       {
        min2 = arr[1];
       }
    for(i =2; i<size;i++)
    {
        if(arr[i]<min1)
        {
            min2 = min1;
            min1 = arr[i];
        }
        else if(arr[i]<min2)
        {
            min2= arr[i];
        }
    }
    return min2;
}


int main()
{   int arr[SIZE] = {2,6,5,8,9};
    printf("%d",findSecondSmallest(arr,SIZE));
    return 0;
}