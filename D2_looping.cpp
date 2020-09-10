#include <iostream>
#include <vector>

int main() {
    std::vector<int> list; //= {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}
    int arr[10]; //= {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}

    //initialize vector
    for (int i = 0; i < 10; i++) {
        list.push_back(i);
    }

    //initialize array
    for (int i = 0; i < 10; i++) {
        arr[i] = i;
    }

    int n;

    std::cout << "Enter number: ";
    std::cin >> n;

    //standard for loop
    for (int i = 0; i < n; i++) {
        std::cout << list.at(i%10) << " ";
    }
    std::cout << std::endl;

    //while loop
    int j = 0;
    while (j < n) {
        std::cout << j << " ";
        j++;
    }
    std::cout << std::endl;

    //range based loop w/ vector
    for (int k : list) {
        std::cout << k << " ";
    }
    std::cout << std::endl;

    //range based loop w/ array
    for (int l : arr) {
        std::cout << l << " ";
    }
    std::cout << std::endl;

    return 0;
}
