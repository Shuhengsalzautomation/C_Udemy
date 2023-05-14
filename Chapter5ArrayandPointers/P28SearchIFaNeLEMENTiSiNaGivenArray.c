#include<stdio.h>

#define SIZE 4

int findIFKeyInArray(int* arr,int size,int key)
{
    for(int i =0;i<SIZE;i++)
    {
        if(arr[i]==key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int grades[SIZE] = {80,85,72,90};
    int result;
    int key;
    result = findIFKeyInArray(grades,SIZE,80);
    printf("Result =%d\n",result);
    return 0;

}