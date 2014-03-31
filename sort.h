#include "priority-queue.h"

#include <iostream>

namespace ADM {
  void heapSort(int array[], int len) {
    PriorityQueue queue(array, len);

    for (int i=0; i<len; ++i) {
      array[i] = queue.extract_min();
    }
  }
};
