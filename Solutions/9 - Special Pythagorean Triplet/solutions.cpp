#include <iostream>

int main() {
    int targetSum = 1000;

    for (int a = 1; a <= targetSum / 3; ++a) {
        for (int b = a + 1; b <= targetSum / 2; ++b) {
            int c = targetSum - a - b;
            if (a * a + b * b == c * c) {
                std::cout << "The Pythagorean triplet is: " << a << ", " << b << ", " << c << std::endl;
                std::cout << "The product of abc is: " << a * b * c << std::endl;
                return 0;
            }
        }
    }

    std::cout << "No Pythagorean triplet found." << std::endl;
    return 0;
}
