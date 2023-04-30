#include<stdio.h>
#define SIZE 4
int findMaximun(int* arr,int size)
{
    int max = arr[0];
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
    return max;
}

int main()
{
    int grades[SIZE] = {80,85,72,90};
    int maxGrade =findMaximun(grades,SIZE);
    printf("MAX = %d\n",maxGrade);
    return 0;
}