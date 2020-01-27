#include <iostream>
#include "src/lib/solution.h"

// int main()
// {
//     Solution solution;
//     std::cout << solution.PrintHelloWorld() << std::endl;

//     return EXIT_SUCCESS;
// }

int main()
{
    Solution solution;

    std::cout << solution.NonReFactorial(4) 
              << std::endl;

    std::cout << solution.ReFactorial(4) 
              << std::endl;

    return EXIT_SUCCESS;
}