#include<stdio.h>

#define SIZE 4
int sumArray(int *ptr,int size)
{
    int i,sum=0;
    for(i=0;i<size;i++)
    {
        sum=sum+ptr[i];
    }
    return sum;
}

double averageArray(int* arr, int size)
{
    double average = (double)sumArray(arr,size)/size;
    return average;
}

int main()
{
    int grades[SIZE]={80,85,72,90};
    double average;
    average = averageArray(grades,SIZE);
    printf("Average =%lf\n",average);
    return 0;
}