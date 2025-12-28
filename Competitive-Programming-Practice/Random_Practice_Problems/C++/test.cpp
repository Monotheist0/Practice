#include <iostream>

int calculateSum(int a, int b) {
    int sum = a + b;
    return sum;
}

int main() {
    int x = 5;
    int y = 10;
    int result = calculateSum(x, y);
    std::cout << result << std::endl;
    return 0;
}