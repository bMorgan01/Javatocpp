#include <iostream>

int factorial(int n) {
    if (n <= 0) {
        return -1;
    } else if (n > 1) {
        return n * factorial(n - 1); //n * n-1 * n-2....
    } else return 1;
}

int main() {
    int n;

    std::cout << "Enter n to do n!: ";
    std::cin >> n;

    std::cout << "Ans: " << factorial(n) << std::endl;
    return 0;
}
