#include <iostream>
#include <vector>

int main() {
    int *p = new int[1];
    int len = 1;

    std::vector<int> v;
    int num;

    std::cout << "Please enter a number: ";
    std::cin >> num;

    v.push_back(num);  //vector append
    p[0] = num;

    while (num != 0) {
        std::cout << "Please enter a number: ";
        std::cin >> num;

        v.push_back(num);  //vector append

        // realloc
        int* temp = new int[len + 1]; //create a new temporary array to "transport values"
        //std::copy(p, p + len, temp);
        for (int i = 0; i < len; i++) temp[i] = p[i]; //copy contents of current array to temp arr
        temp[len] = num; //add new number to end of temp array
        delete [] p; //delete (free the memory) array p in preparation for resize
        p = temp; //set old array to the temp array
        len++;
    }

    std::cout << "Vector: " << std::endl;
    for (int i : v) {
        std::cout << i << " " << std::endl;
    }

    std::cout << std::endl << "Array: " << std::endl;
    for (int i = 0; i < len; i++) {
        std::cout << p[i] << " " << std::endl;
    }

    delete [] p;
    return 0;
}
