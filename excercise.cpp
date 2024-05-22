#include <iostream>
#include <string>

std::string getNumbers(int min, int max) {
    int total = 0;
    for (int i = min; i <= max; ++i) {
        if (i % 2 == 1) {
            std::cout << i << std::endl;  // Print the odd number
            total += i;
        }
    }
    return "The total sum of the odd numbers is : " + std::to_string(total);
}

int main() {
    int min, max;
    
    // Get user input for min and max values
    std::cout << "Enter the minimum value: ";
    std::cin >> min;
    std::cout << "Enter the maximum value: ";
    std::cin >> max;

    std::string result = getNumbers(min, max);
    std::cout << result << std::endl;  // Print the result
    return 0;
}
