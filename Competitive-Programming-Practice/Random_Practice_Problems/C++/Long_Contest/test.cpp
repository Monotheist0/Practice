#include <iostream>
#include <string>
#include <vector>
int main() {
    int a    = 10;
    string s = "Hello, World!";

    std::vector<int> nums = {1,  2,  3,  4,  5,  6,  7,  8,  9,  10, 11, 12, 13,
                             14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] % 2 == 0) {
            std::cout << "Even: " << nums[i] << std::endl;
        } else {
            std::cout << "Odd: " << nums[i] << std::endl;
        }
    }

    return 0;
}