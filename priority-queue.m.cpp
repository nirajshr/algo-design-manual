#include "priority-queue.h"

#include <iostream>

void heap_k_item_test(ADM::PriorityQueue const& queue) {
  int input_num = 0;
  std::cout << "Input Num: ";
  std::cin >> input_num;
  std::cout << "heap_compare1: " << heap_compare(queue, 1, 1, input_num) << std::endl;
  std::cout << "heap_compare2: " << heap_compare(queue, 1, 2, input_num) << std::endl;
  std::cout << "heap_compare3: " << heap_compare(queue, 1, 3, input_num) << std::endl;
  std::cout << "heap_compare4: " << heap_compare(queue, 1, 4, input_num) << std::endl;
  std::cout << "heap_compare5: " << heap_compare(queue, 1, 5, input_num) << std::endl;
  std::cout << "heap_compare6: " << heap_compare(queue, 1, 6, input_num) << std::endl;
}

int main() {
  int nums[] = {1492, 1783, 1776, 1804, 1865, 1945, 1963, 1918, 2001, 1941};
  ADM::PriorityQueue queue(nums, sizeof(nums) / sizeof(int));

  std::cout << queue << std::endl;

  while (!queue.empty()) {
    int min = queue.extract_min();
    std::cout << min << "  ";
  }
  std::cout << std::endl;

  ADM::PriorityQueue queue2(nums, sizeof(nums) / sizeof(int));
  heap_k_item_test(queue2);

  return 0;
};
