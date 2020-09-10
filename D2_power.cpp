#include <iostream>

int power(int n, int e) {
    if (n < 0 || e < 0) return -1;
    else if (e > 0) return n * power(n, e - 1);
    else return 1;
}

int main() {
    int n, e;

    std::cout << "Enter number: ";
    std::cin >> n;
    std::cout << "Enter exponent: ";
    std::cin >> e;

    std::cout << "Ans: " << power(n, e) << std::endl;
    return 0;

    /*
     * Example:
     *
     *      5^4
     *
     *              5 * 5^3 =
     *          5 * 5 * 5^2 =
     *      5 * 5 * 5 * 5^1 =
     *  5 * 5 * 5 * 5 * 5^0 = 625
     */
}
