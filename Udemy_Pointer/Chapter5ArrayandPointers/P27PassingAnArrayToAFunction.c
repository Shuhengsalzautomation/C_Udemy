#include<stdio.h>

int sumArray(int *ptr,int size)
{
    int i,sum=0;
    for(i=0;i<size;i++)
    {
        sum=sum+ptr[i];
    }
    return sum;
}

int main()
{
    int grade[3]={3,5,7};
    int result;
    result= sumArray(grade,3);
    printf("Sum =%d\n",result);
    return 0;
}