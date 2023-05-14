#include <stdio.h>
#include <stdlib.h>

/*
write a function that receives an array.
The function should count and print the frequency of each of the Array's Elements.
*/

void printValuesFrequency(int* arr,int size)
{
    int i,j;
    int leftFlag = 0;
    int countValue;

    for(i = 0;i<size;i++)
    {
        countValue = 1;
        leftFlag = 0;
        //left part
        for(j=0;j<i;j++)
        {
            if(arr[j]==arr[i])
            {
                leftFlag = 1;
                break;
            }
        }
            if(leftFlag == 1)
              {
                continue;
              }
            //right part
            for(j=i+1;j<size;j++)
            {
                if(arr[j]==arr[i])
                    countValue++;
            }
            //Print the actual frequency...
            //Value at arr[i] appears countValues times...
    printf("the frequency of %d is %d\n",arr[i],countValue);
    }
}

int main()
{
    int arr[] = {2,2,7,3,6,6,8,8,8,7,7,7};
    printValuesFrequency(arr,12);
    return 0;
}