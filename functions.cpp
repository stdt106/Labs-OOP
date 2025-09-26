#include "functions.h"
#include <string>

std::vector<int> extractNumbers(const std::string& input) {
    std::vector<int> numbers;
    std::string current_num = "";
    
    for (char c : input) {
        if (c >= '0' && c <= '9') {
            current_num += c;
        } else if (!current_num.empty()) {
            numbers.push_back(std::stoi(current_num));
            current_num = "";
        }
    }
    
    if (!current_num.empty()) {
        numbers.push_back(std::stoi(current_num));
    }
    
    return numbers;
}