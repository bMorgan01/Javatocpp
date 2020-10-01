#include <iostream>
#include <sstream>
#include "ComplexNumber.h"

using namespace std;

int main() {
    ComplexNumber num(3, 5);
    ComplexNumber num2(6, -3);

    cout << num << " + " << num2 << " = " << num + num2 << endl;
    return 0;
}
