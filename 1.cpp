#include <iostream>

int main() {
    int sum = 0;
    for (int i = 1; i <= 100; ++i) {
        sum += i;
    }
    std::cout << "The sum from 1 to 100 is: " << sum << std::endl;
    return 0;
}