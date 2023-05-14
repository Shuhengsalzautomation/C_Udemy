#include <stdio.h>
#include <stdlib.h>

void minMax(int *pArr, int size, int *minValue, int *maxValue) {
  *minValue = pArr[0];
  *maxValue = pArr[0];
  for (int i = 0; i < size; i++) {
    if (pArr[i] < *minValue) {
      *minValue = pArr[i];
    }
    if (pArr[i] > *maxValue) {
      *maxValue = pArr[i];
    }
  }
}

int main() {
  int myGrades[] = {80, 90, 100};
  int min, max;
  minMax(myGrades, 3, &min, &max);
  printf("The maximum value in grades: %d.\n", max);
  printf("The minimum value in grades: %d.\n", min);
  return 0;
}