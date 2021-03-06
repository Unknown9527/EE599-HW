#include "src/lib/solution.h"
#include <iostream>

int main() {
  Solution solution;

  std::vector<int> input = {};
            std::cout << "input: nothing & output: " 
            << solution.FindMedian(input) 
            << std::endl;

  input = {1,20,40,100};
  std::cout << "input: 1,20,40,100 & output: " 
            << solution.FindMedian(input)
            << std::endl;

  input = {1,20,40,60,65,100};
  std::cout << "input: 1,20,40,60,65,100 & output: " 
            << solution.FindMedian(input) 
            << std::endl;

  return 0;
}