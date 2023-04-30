#include <stdio.h>
#include<stdlib.h>
#include <string.h>

void genericSwap(void *a, void *b, unsigned int size) 
{ // size - specifies the number of bytes
  void *tempMemory = malloc(size);
  // Memory Copy FUnction

  // void *memcpy(void *dest,void *src, size_t num)
  memcpy(tempMemory, a, size);
  memcpy(a, b, size);
  memcpy(b, tempMemory, size);
  free(tempMemory);
}

int main() 
{
    int num1 = 5, num2 = 7;
    double average1 =90.5, average2 =89.7;
    genericSwap(&average1,&average2,sizeof(double));
    genericSwap(&num1,&num2,sizeof(int));
    printf("After swap: num1 = %d\n, num2 =%d\n", num1, num2);
    printf("After swap: average1 = %f\n, average2 =%f\n", average1, average2);
}