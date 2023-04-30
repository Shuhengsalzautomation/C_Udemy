#include <stdio.h>
#include <stdlib.h>

void swap(int *ptr1, int *ptr2) {
  int temp;
  temp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = temp;
}

int main() {
  int num1, num2;
  printf("Enter num1: ");
  scanf("%d", &num1);
  printf("Enter num2: ");
  scanf("%d", &num2);

  printf("Before swap: num1 = %d\n, num2 =%d\n", num1, num2);
  swap(&num1, &num2);
  printf("After swap: num1 = %d\n, num2 =%d\n", num1, num2);
  return 0;
}