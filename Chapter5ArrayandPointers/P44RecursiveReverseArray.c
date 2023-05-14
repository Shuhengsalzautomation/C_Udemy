#include <stdio.h>
#include <stdlib.h>

//Recursively Reverse An Array

//Example1: [1,3,4,2,0]--->[0,2,4,3,1]
//Example2: [2,4,6,5,3,9]--->[9,3,5,6,4,2]

void swap(int *ptr1,int *ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

void printArray(int *arr,int size)
{
    for(int i =0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void reverseArrayRecursively(int *arr,int n)
{
    if(n>1)
    {
        swap(arr,arr+n-1);
        reverseArrayRecursively(arr+1,n-2);
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6};
    reverseArrayRecursively(arr,6);
    printArray(arr,6);
    return 0;
}

