#include "sort.h"
#include "utilities.h"

#include <iostream>

int main() {
  int nums[] = {1492, 1783, 1776, 1804, 1865, 1945, 1963, 1918, 2001, 1941};
  int len = sizeof(nums) / sizeof (int);

  ADM::printArray(nums, len);

  ADM::heapSort(nums, len);

  ADM::printArray(nums, len);

  return 0;
};
