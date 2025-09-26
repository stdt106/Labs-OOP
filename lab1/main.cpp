#include <iostream>
#include <vector>
#include <string>
#include "functions.h"

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    std::vector<int> numbers = extractNumbers(input);
    
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    return 0;
}